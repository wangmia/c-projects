/*
编写一段程序，像下面这样显示读取到的三个整数的和。
请输入三个整数。
整数1:7↙
整数2:15↙
整数3:23↙
它们的和是45。
*/

#include <stdio.h>
int main(){
    int a, b, c;
    puts("请输入三个整数.");
    printf("整数1：");
    scanf("%d", &a);
    printf("整数2：");
    scanf("%d", &b);
    printf("整数3：");
    scanf("%d", &c);
    printf("它们的和是%d\n", a + b + c);
    return 0;
}