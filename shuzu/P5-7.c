/*
编写一段程序，读取数组中的数据个数和元素值并显示。显示时，各值之间用逗号和空格分割，并用大括号将所有值括起来。
注意利用对象式宏来声明数组的元素个数，如代码清单5-12那样。
*/

#include <stdio.h>
#define NUME 7
int main(){
    int fen[NUME];
    printf("请输入7个学生的分数：");
    for(int i=0;i<NUME;i++){
        scanf("%d",&fen[i]);
    }
    printf("学生分数为：{");
    for(int i=0;i<NUME;i++){
        printf("%d",fen[i]);
        if((NUME-1)!=i){
            putchar(',');
        }
    }
    putchar('}');
}