// 编写一段程序，按照升序显示出小于输入值的所有正偶数。

#include <stdio.h>
int main(){
    int a;
    printf("请输入一个正整数：");
    scanf("%d",&a);
    for(int i=2;i<=a;i+=2){
        printf("%d ",i);
        //i++;
    }
}