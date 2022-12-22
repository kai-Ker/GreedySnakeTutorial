#include <conio.h>
#include <stdio.h>
int main() {
    printf("press one key: ");
    char ch = _getch();
    printf("\nyou pressed: %c", ch);
    return 0;
}