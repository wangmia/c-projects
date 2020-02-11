// 对代码清单4-18和代码清单4-19中的程序进行修改，分别显示出直角在左上方和右上方的等腰直角三角形(生成两个程序)。

#include <stdio.h>
int main(){
    int i , j, len;
  
    printf("短边："); scanf("%d", &len);

    for (i = 1; i <= len; i ++) {
        for (j = len; j >= i; j--)
            putchar('*');
        putchar('\n');
    }

    for (i = 1; i <= len; i ++) {
        for (j = 1; j <= len + i; j++)
            putchar(' ');
        for (j = len; j >= i; j--)
            putchar('*');
        putchar('\n');
    }
    return 0;
}