// 编写一段程序，为double型数组的所有元素分配静态存储期，并确认它们都被初始化为0.0

#include <stdio.h>
int main(){
    static double a[5] = {0.0,0.0,0.0,0.0,0.0};
    
    puts("double型数组元素有");
    for(int i=0;i<5;i++){
        printf("%.2lf ",a[i]);
    }
    putchar('\n');
}