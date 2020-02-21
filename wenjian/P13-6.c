// 编写程序实现从键盘读入文件名，计算该文件的行数(换行符的个数)并显示在界面上。

#include <stdio.h>
#include <stdlib.h>
#define NAME 100

int main() {
    char fname[NAME];
    printf("输入文件名：");
    scanf("%s", fname);
    FILE* fp = fopen(fname, "r");
    if (NULL == fp) {
        printf("文件打开失败\n");
        
    }else{

    char a;
    int count = 0;

    while( EOF != (a = fgetc(fp)) ){
        if (a == '\n') {
            count++;
        }
    }
    
    printf("文件%s共有%d行。\n", fname, count);
    fclose(fp);
    }
    return 0;
}