// 编写一段程序，读取两个整数的值，然后计算出它们之间所有整数的和。

#include <stdio.h>
int main(){
    int a,b,sum=0;
    puts("请输入两个数");
    printf("数1：");     scanf("%d",&a);
    printf("         数2：");    scanf("%d",&b);
    for(int i=(a<b?a:b)+1;i<(a>b?a:b);i++){
        sum += i;
    }
    printf("%d和%d之间所有数的和是%d",a,b,sum);
}