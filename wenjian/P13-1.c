/*
    代码清单13-1中的程序只能打开名为"abc"的文件。请将程序改为从键盘读入文件名，如果存在该名称的文件，就显示“该文件存在。”，否则就显示“该文件不存在。”。
*/

#include <stdio.h>

int main(){
    FILE *fp;
    char s ;
    printf("请输入文件名");
    gets(&s);
    fp = fopen(&s,"r");
    if(fp==NULL){
        puts("该文件不存在");
    }else{
        puts("该文件存在");
        fclose(fp);
    }
    return 0;
}