// 编写一段程序，使之交替显示+和-，总个数等于所输入的整数值。另外，当输入0以下的整数时，则什么也不显示。

#include <stdio.h>
int main(){
    int a;
    printf("请输入整数：");
    scanf("%d",&a);
    for(int i=a;i>=0;i-=2){
        putchar('+');
        putchar('-');
    }  
    if(a>=0){
        putchar('\n');
    } 
}