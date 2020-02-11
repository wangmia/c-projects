// 编写一段程序，为九九乘法表增加横纵标题。

#include <stdio.h>
int main(){
    printf("       ");
    for(int a=1;a<10;a++){
        printf("%4d ",a);
    }
    putchar('\n');
    for(int i=1;i<=55;i++){
        putchar('-');
    }
    putchar('\n');
    for(int i=1;i<=9;i++){
        printf("%4d  |",i);
        for(int j=1;j<=9;j++){
            printf("%4d ",i*j);
        }
        putchar('\n');
    }
}