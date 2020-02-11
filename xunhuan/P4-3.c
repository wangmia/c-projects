// 对代码清单4-5中的程序进行修改，当输入的值为负数的时候不执行换行操作。

#include <stdio.h>
int main(){
    int no;
    printf("请输入一个正整数：");
    scanf("%d", &no);
    while (no >= 0) {
        printf("%d ", no);
        no--;
    }
    if(i>=0){
        putchar('\n');
    }
    return 0;
}