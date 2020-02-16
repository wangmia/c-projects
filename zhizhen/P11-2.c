// 在代码清单11.4中，各数组的字符串个数3是作为常量嵌在程序(for语句的控制表达式)中的。请编写一段程序，将其改写为通过计算求出。

#include <stdio.h>
int main(){
    int i;
    char a[][5] = {"LISP","C","Ada"};
    char *p[] = {"PAUL","X","MAC"};
    for(i=0;i<(sizeof(a)/5);i++){
        printf("a[%d] = \"%s\"\n",i,a[i]);
    }
    for(i=0;i<(sizeof(p)/sizeof(p[0]));i++){
        printf("p[%d] = \"%s\"\n",i,p[i]);
    }
    // int s;
    // // s = sizeof(a)/5;
    // s = sizeof(p)/sizeof(p[0]);
    // printf("%d",s);
    return 0;
}