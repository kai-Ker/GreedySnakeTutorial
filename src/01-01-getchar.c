#include <stdio.h>
int main() {
    char ch;
    while (EOF != (ch = getchar())) {
        switch (ch) {
        case 'w':
            printf("pressed: w\n");
            break;
        case 'a':
            printf("pressed: a\n");
            break;
        case 's':
            printf("pressed: s\n");
            break;
        case 'd':
            printf("pressed: d\n");
            break;
        }
    }
    return 0;
}
