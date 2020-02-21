// 请参考代码清单13-7编写一个程序，将所有英文大写字母转换为小写字母的同时执行复制操作。

#include <stdio.h>
#include <ctype.h>

int main(void){
    int ch;
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("打开原文件:"); scanf("%s", sname);
    printf("打开目标文件:"); scanf("%s", dname);

    if((sfp = fopen(sname, "r")) == NULL){
        printf("原文件打开失败\n");
    }else {
        if ((dfp = fopen(dname, "w")) == NULL)
            printf("目标文件打开失败\n");
        else {
            while ((ch = fgetc(sfp)) != EOF){
                if(ch<='Z'&&ch>='A'){
                    ch += 'a'-'A';
                }
                putchar(ch);
                fputc(ch, dfp);
            }              
            fclose(dfp);
        }
        fclose(sfp);
    }

    return 0;
}