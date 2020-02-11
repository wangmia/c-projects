/*
编写一段程序输入两个整数，如果它们的差值小于等于10,则显示“它们的差小于等于10”。否则，
显示“它们的差大于等于11”。
请使用逻辑或运算符。
*/

#include <stdio.h>
int main() {
    int a, b;
    puts("请输入两个整数");
    printf("整数1：");
    scanf("%d", &a);
    printf("整数2：");
    scanf("%d", &b);

    //如果a小就调换两个数的值
    if (a < b) {
        int c;
        c = a;
        a = b;
        b = c;
    }

    if (a - b <= 10) {
        puts("它们的差小于等于10");
    } else {
        puts("它们的差大于等于11");
    }

    return 0;
}