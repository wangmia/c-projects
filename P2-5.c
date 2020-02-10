// 编写一段程序，读取两个整数的值，计算出前者是后者的百分之几，并用实数输出结果。

#include <stido.h>
int main(){
    int a, b;
    printf("整数1：");
    scanf("%d", &a);
    printf("整数2：");
    scanf("%d", &b);
    printf("%d是%d的的%.2f%%\n", a, b, ((double)a / b) * 100);
    return 0;
}