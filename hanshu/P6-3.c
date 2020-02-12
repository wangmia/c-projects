/*
/创建一个函数，返回int型整数的立方。
int cube(int x)
*/

#include <stdio.h>

int sqr(int x){
    return x * x * x;
}

int diff(int a, int b){
    return (a > b ? a - b : b - a);
}

int main(){
    int x, y;
    puts("请输入两个整数。");
    printf("整数x:"); scanf("%d", &x);
    printf("整数y:"); scanf("%d", &y);
    printf("x和y的立方差是%d。\n", diff(sqr(x), sqr(y)));
    return 0;
}