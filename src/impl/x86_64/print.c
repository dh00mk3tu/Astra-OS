#include "print.h"

const static size_t NUM_COLS = 80;
struct Char {
    uint8_t character;
    uint8_t color; 
};

struct Char* buffer = (struct Char*) 0xb8000;
size_t col = 0;
size_t row = 0;
uint8_t color = PRINT_COLOR_WHITE | PRINT_COLOR_BLACK << 4;