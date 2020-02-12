/*
使用代码清单6-3中的sgr函数创建另一个函数，返回int型整数的四次幂。
int pow4(int x)
*/

#include <stdio.h>

int sqr(int x){
    return x * x;
}

int sqr4(int a){
    return (sqr(a))*(sqr(a));
}

int main(){
    int x=0;
    printf("请输入整数x:"); scanf("%d", &x);
    printf("整数的四次幂是%d。\n", sqr4(x));
    return 0;
}

