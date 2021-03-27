global start

section .text
bits 32
start:
    mov esp. stack_top,
    
    call check_multiboot
    call check_cpuid
    call check_long_mode

    ; print 'AstraOS'
    mov dword [0xb8000], 0x2f4b2f4f
    hlt

check_multiboot:
    cmp eax, 0x36d76289
    jne .no_multiboot
    ret

.no_multiboot:
    mov al, "M"
    jmp error

error:
    ; print "ERR: X" where X is the error code
    mov dword [0xb8000], 0x4f534f45
    mov dword [0xb8004], 0x4f3a4f52
    mov dword [0xb8008], 0x4f204f20
    mov byte  [0xb800a], al
    hlt

section .bss
stack_bottom:
    resb 4096 * 4
stack_top: