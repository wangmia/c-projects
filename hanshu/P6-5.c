/*
创建一个函数，返回1到n之间所有整数的和。
int sumup(int n)
*/

#include <stdio.h>

int sumup(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i; 
    }
    return sum;
}

int main(){
    int n;
    printf("n的值：");
    scanf("%d",&n);
    printf("1到n的和是%d\n",sumup(n));
}