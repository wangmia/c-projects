/*
编写一段程序，读取一个正整数，显示其位数。
※注意:代码清单4-10中while语句的循环次数和no的位数一致。
*/

#include <stdio.h>
int main(){
    int no,c=0;
    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);
        if (no <= 0){
            puts("请不要输入非正整数！！！");
        }
    } while (no <= 0);
    printf("%d的位数是：",no); 
    // while (no > 0) {
    //     printf("%d", no % 10);
    //     no /= 10;
    // }
    while(no>0){
        no = no/10;
        c++;
    }
    printf("%d",c);
    puts("。");
    return 0;
}