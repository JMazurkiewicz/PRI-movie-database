#include "IO/BasicIO.h"

void clearStdin(void) {
    fseek(stdin, 0, SEEK_END);
}

void newLine(void) {
    putchar('\n');
}

void printString(String string) {
    fputs(string, stdout);
}