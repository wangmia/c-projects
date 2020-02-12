/*
创建一个函数，返回元素个数为n的int型数组v中的最小值。
int min_of(const int v[]，int n)
*/

#include <stdio.h>

int min_of(const int v[],int n){
    int min = v[0];
    for(int i=0;i<v[n-1];i++){
        if(min >= v[i]){
            min = v[i];
        }  
    }
    return min;
}

int main(){
    int n = 7;
    int ge[7] = {4,5,9,3,6,1,7};
    printf("数组中最小值是%d",min_of(ge,7));
}