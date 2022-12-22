#include <stdio.h>
#include <windows.h>

void SetFixedConsoleSize(int cols, int lines) {
    char cmd[50];
    sprintf(cmd, "mode con cols=%d lines=%d", cols, lines);
    system(cmd);

    SetWindowLongPtrA(GetConsoleWindow(), GWL_STYLE,
                      GetWindowLongPtrA(GetConsoleWindow(), GWL_STYLE) & ~WS_SIZEBOX & ~WS_MAXIMIZEBOX);
}

int main() {
    SetFixedConsoleSize(20, 20);
    return 0;
}