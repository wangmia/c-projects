// 编写一段程序，输入一个整数值，显示出它的绝对值。

#include <stdio.h>
int main() {
    int a = 0;
    printf("请输入一个整数：");
    scanf("%d", &a);

    if (a > 0) {
        printf("整数的绝对值是%d\n", a);
    } else if (a < 0) {
        printf("整数的绝对值是%d\n", -a);
    } else {
        printf("0的绝对值还是0");
    }

    return 0;
}