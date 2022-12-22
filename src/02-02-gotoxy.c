#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(void) {
    gotoxy(6, 10);
    printf("Hello world");
    return 0;
}
