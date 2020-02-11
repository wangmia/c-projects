// 编写一段程序，显示以所输入整数为边长的正方形。

#include <stdio.h>
int main(){
    int bian=0;
    printf("请输入边长：");
    scanf("%d",&bian);
    for(int i=0;i<bian;i++){
        for(int j=0;j<bian;j++){
            putchar('*');
            putchar(' ');
        }
        putchar('\n');
    }
}