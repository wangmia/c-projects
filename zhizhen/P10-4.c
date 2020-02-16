/*
编写如下set_idx函数，接收元素类型为int型、元素个数为n的数组，并为所有元素赋上和下标相同的值。
void set_idx(int *v,int n)
*/


#include <stdio.h>
#define NUML 5
void set_idx(int *v,int n){
    for (int i=0;i<n;i++){
        v[i] = i;
    }
}

int main(){
    int stu[NUML] = {1,2,3,4,5};
    set_idx(stu,NUML);
    for(int i=0;i<NUML;i++){
        printf("a[%d]= %d\n",i,stu[i]);
    }
}