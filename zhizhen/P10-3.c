/*
编写如下函数，将n1、n2、n3指向的三个int型整数按升序排列。
void sort3(int *n1,int *n2,int *n3)
*/

#include <stdio.h>

void swap(int *a,int *b){
    int nut = *a;
    *a = *b;
    *b = nut; 
}
int xiao(int *c,int *d){
    if(*c>*d){
        swap(c,d);
    }
    return *c;
}
void sheng(int *n1,int *n2,int *n3){
   *n1 = xiao(n1,n2);
   *n1 = xiao(n1,n3);
   *n2 = xiao(n2,n3); 
}

int main(){
    int a,b,c;
    printf("整数1：");
    scanf("%d",&a);
    printf("整数2：");
    scanf("%d",&b);
    printf("整数3：");
    scanf("%d",&c);
    sheng(&a,&b,&c);
    printf("三个数的正序是:%3d%3d%3d\n",a,b,c);
}
