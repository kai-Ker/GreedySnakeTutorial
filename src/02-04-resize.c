#include <stdio.h>
#include <stdlib.h>

void SetConsoleSize(int cols, int lines) {
    char cmd[50];
    sprintf(cmd, "mode con cols=%d lines=%d", cols, lines);
    system(cmd);
}

int main() {
    SetConsoleSize(26, 5);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 26; ++j) {
            putchar('A' + j);
        }
        putchar('\n');
    }
    system("pause");
    return 0;
}