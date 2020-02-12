/*
创建一个函数，对元素个数为n的int型数组v进行倒序排列。
void rev_intary{int v[],int n)
*/

#include <stdio.h>

void  diaohuan(int a,int b){
    int c = 0;
    c = a;
    a = b;
    b = c;
    
}

void rev_intary(int v[],int n){
    int c = 0;
    // for(int i=0;i<n;i++){

    //     // diaohuan(v[i],v[n-(i+1)]);
    //     // c = v[i];
    //     // v[i] = v[n-(i+1)];
    //     // v[n-(i+1)] = c; 
    //     // printf("%d",v[i]);
    //     // printf("%d",v[n-(i+1)]);

    //     // printf(" %d",v[i]);
    // }
    putchar('{');
    for(int i=0;i<n;i++){
        printf(" %d",v[n-(i+1)]);
    }
    putchar('}');
}


int  main(){
    int shu[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("元素为10的数组倒序输出为:");
    rev_intary(shu,10);
}