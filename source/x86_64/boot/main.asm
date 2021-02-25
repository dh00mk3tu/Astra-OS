global start

section .text
bits 32
start:
    ; print 'Active'
    mov dword [8xb8000], 0x2f4b2f4f
    hlt