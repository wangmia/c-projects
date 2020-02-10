// 编写程序对整型常量、浮点型常量、int型变量和double型变量进行乘除等各种运算，从而验证本节介绍的规则。

#include <stdio.h>

int main(){
    int a = 7;
    int b = 5;
    printf("5+7=%d\n", a + b);
    printf("7-5=%d\n", a - b);
    printf("7÷5=%d\n", a / b);
    printf("7x5=%d\n", a * b);
    printf("7%%5=%d\n", a % b);

    double c = 7.0;
    double d = 5.0;
    printf("5+7=%f\n", c + d);
    printf("7-5=%f\n", c - d);
    printf("7÷5=%.2f\n", c / d);
    printf("7x5=%f\n", c * d);

    int e = 0;
    int f = 0;
    puts("请输入两个整数");
    printf("整数1：");
    scanf("%d", &e);
    printf("整数2：");
    scanf("%d", &f);
    printf("%d+%d=%d\n", e, f, e + f);
    printf("%d-%d=%d\n", e, f, e - f);
    printf("%d÷%d=%d\n", e, f, e / f);
    printf("%dx%d=%d\n", e, f, e * f);
    printf("%d%%%d=%d\n", e, f, e % f);

    double g = 0;
    double i = 0;
    puts("请输入两个实数");
    printf("整数1：");
    scanf("%lf", &g);
    printf("整数2：");
    scanf("%lf", &i);
    printf("%f+%f=%f\n", g, i, g + i);
    printf("%f-%f=%f\n", g, i, g - i);
    printf("%f÷%f=%f\n", g, i, g / i);
    printf("%fx%f=%f\n", g, i, g * i);

    return 0;

}