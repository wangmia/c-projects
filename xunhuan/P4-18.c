/*
编写一段程序，输入一个整数值，显示该整数个'*'。每显示5个就进行换行。
显示多少个*:12
*****
*****
**
*/

#include <stdio.h>
int main() {
    int a, b, c;
    printf("显示多少个*：");
    scanf("%d", &a);
    b = a / 5;

    for (int i = 1; i <= b; i++) {
        printf("*****");
        printf("\n");
    }

    c = a % 5;

    for (int i = 1; i <= c; i++) {
        printf("*");
    }

    printf("\n");
    return 0;
}