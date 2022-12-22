#include <conio.h>
#include <stdio.h>
int main() {
    while (1) {
        if (_kbhit()) {
            // 当某个按键被按下，进入这里，利用 _getch() 读取按键
            switch (_getch()) {
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
        // 如果该次循环时没有按键按下，则不会进入 if 语句，自然地进行下一轮循环
    }
    return 0;
}