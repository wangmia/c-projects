/*
创建一个函数search_idx,将和有n个元素的数组v中的key相等的所有元素的下标存储在数组idx中，返回和key相等的元素的个数。
int search_idx(const int v[] int idx[],int key,int n);
例如，如果v中所接收的数组的元素是{1,7,5,7,2,4,7},key为7的话,{1,3,6}就会被存储在id中x，并返回3。
*/

#include <stdio.h>
#define NESE 10

int search_idx(const int v[],int idx[],int key,int n){
   
    int c=0;
    for(int i=0;i<n;i++){
        if(v[i]==key){
            idx[c] = i;
            c++;
        }
    }

    putchar('{');
    for(int i=0;i<c;i++){
        printf("%d ",idx[i]);
    }
    putchar('}');
    return c;
}


int main(){
    int a[NESE] = {1,3,5,3,6,6,7,3,6,5};
    int b[NESE] = {0};
    int key = 3;
    printf("a数组元素为：{");
    for(int i=0;i<NESE;i++){
        printf(" %d",a[i]);
    }
    putchar('}');
    putchar('\n');
    printf("idx数组元素为：");
    key = search_idx(a,b,key,NESE);
    putchar('\n');
    printf("key得%d\n",key);
}