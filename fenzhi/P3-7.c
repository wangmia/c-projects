/*
编写一段程序，计算出输入的四个整数中的最大值并显示。
※注意使用if语句
*/

#include <stdio.h>
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b, c, d;
    puts("请输入四个整数");
    printf("整数A：");
    scanf("%d", &a);
    printf("整数B：");
    scanf("%d", &b);
    printf("整数C：");
    scanf("%d", &c);
    printf("整数D：");
    scanf("%d", &d);
    printf("四个数中最大的是%d", max(max(a, b), max(c, d)));
    return 0;
}