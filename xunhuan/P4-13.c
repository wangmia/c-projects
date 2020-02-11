// 编写一段程序，求1到n的和。n的值从键盘输入

#include <stdio.h>
int main(){
    int a,sum=0;
    printf("请输入一个整数：");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        sum += i;
    }
    printf("1到%d的和是%d\n",a,sum);
}