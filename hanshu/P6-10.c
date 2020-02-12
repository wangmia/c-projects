/*
创建一个函数，对元素个数为n的int型数组v2进行倒序排列，并将其结果保存在数组v1中。
void intary_rcpy(int v1[],const int v2[],int n)
*/

#include <stdio.h>
#define NUSE 10

void intary_rcpy(int v1[],const int v2[],int n){
    int c = 0;
    for(int i=0;i<n;i++){
        v1[i] = v2[n-(i+1)];
    }
    for(int i=0;i<n;i++){
        printf("%d ",v1[i]);
    }
}

int main(){
    int a[NUSE]={1,2,3,4,5,6,7,8,9,10};
    int b[NUSE]={0};
    printf("数组v1结果是：");
    intary_rcpy(b,a,NUSE);
}