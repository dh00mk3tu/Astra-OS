#include "print.h"

const static size_t NUM_COLS = 80;
const static size_t NUM_ROWS = 25;

struct Char {
    uint8_t character;
    uint8_t color; 
};

struct Char* buffer = (struct Char*) 0xb8000;
size_t col = 0;
size_t row = 0;
uint8_t color = PRINT_COLOR_WHITE | PRINT_COLOR_BLACK << 4;


void clear_row(size_t row ){
    struct Char empty = (struct Char) {
        Character: '',
        color: color,
    };

    for( size_t col = 0; col < NUM_COLS; col++ ){
        buffer[col + NUM_COLS * row] = empty;
    }
}

void print_clear() {
    for (size_t i = 0; i < NUM_COLS;i++) {
        clear_row();
    }
}

void print_char() {
    if(character == '\n'){
        print_newLine();
        return;
    }

    if (col > NUM_COLS){
        print_newLine();
    }

    buffer[col + NUM_COLS * row] = (struct Char) {
        character: (uint8_t) character,
        color: color,
    };

    col++;
}

void print_str(char* str) {
    for(size_t i=0; 1; i++){
        char character = (uint8_t) str[i];

        if (character == '\0') {
            return;
        }

        print_char(character);
    }
}