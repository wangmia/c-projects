/*
编写一段程序，计算出输入的三个整数中的最小值并显示。
※注意使用if语句
*/

#include <stdio.h>
int main() {
    int a, b, c, min;
    puts("请输入三个整数");
    printf("整数A：");
    scanf("%d", &a);
    printf("整数B：");
    scanf("%d", &b);
    printf("整数C：");
    scanf("%d", &c);

    if (a < b) {
        if (a < c) {
            min = a;
        } else {
            min = c;
        }
    } else {
        if (b < c) {
            min = b;
        } else {
            min = c;
        }
    }

    printf("三个数中最小的是%d\n", min);
    return 0;
}