#include <conio.h>
#include <stdio.h>
int main() {
    while (1) {
        if (_kbhit()) {
            printf("some key was hit\n");
            break;
        }
    }
    return 0;
}
