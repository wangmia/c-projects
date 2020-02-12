/*
创建一个函数，返回三个int型整数中的最小值。
int min3(int a,int b,int c)
*/

#include <stdio.h>

int min2(int a,int b,int c){
    int min=a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int main(){
    int n1, n2, n3;
    puts("请输入两个整数。");
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);
    printf("整数c:"); scanf("%d", &n3);
    printf("较小整数的值是%d。\n", min2(n1, n2, n3));
    return 0;
}