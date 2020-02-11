/*
编写一段程序，输入三个整数，如果三个数都相等，则显示“三个值都相等”。如果其中任意两个值相等，则显示
“有两个值相等”。如果上述两种情况都不满足，则显示“三个值各不相同”。
*/

#include <stdio.h>
int main() {
    int a, b, c;
    puts("请输入三个整数");
    printf("整数A：");
    scanf("%d", &a);
    printf("整数B：");
    scanf("%d", &b);
    printf("整数C：");
    scanf("%d", &c);

    if (a == b && a == c) {
        printf("三个值都相等\n");
    } else if (a == b || a == c || b == c) {
        printf("有两个值相等\n");
    } else {
        printf("三个值都不相等\n");
    }
}