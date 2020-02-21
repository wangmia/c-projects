/*
编写程序，从键盘读入文件名，消去该名称的文件的内容。
以只写模式打开文件即可(用只写模式"w"打开文件后，文件的内容就被消除了)。
*/

#include <stdio.h>

int main(){
    FILE *fp;
    char s ;
    printf("请输入文件名");
    gets(&s);
    fp = fopen(&s,"w");
    if(fp != NULL){
        puts("该文件内容已清除");
        fclose(fp);
    }
    return 0;
}