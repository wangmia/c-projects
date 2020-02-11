// 编写一段程序，确认相等运算符和关系运算符的运算结果是1和0。

#include <stdio.h>
int main() {
    int dengyu1, guanxi1;
    int dengyu2, guanxi2;
    int a = 3;
    int b = 5;
    dengyu1 = (a == b);
    guanxi1 = (a == 3 && b == 5);
    dengyu2 = (a == 3);
    guanxi2 = (a == b || a == 5);

    printf("相等运算符1的返回值是 %d\n", dengyu1);
    printf("相等运算符2的返回值是 %d\n", dengyu2);
    printf("关系运算符1的返回值是 %d\n", guanxi1);
    printf("关系运算符1的返回值是 %d\n", guanxi2);

    return 0;


}