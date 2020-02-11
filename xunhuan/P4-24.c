/*
编写一段程序，输入一个整数，显示出输入整数层的金字塔形状。 提示:第i行显示(i-1)*2+1个'*'。
让我们来画一个金子塔。
金字塔有几层：3
  *
 ***
*****
*/


#include <stdio.h>

// void  main()
// {
// int i,j;
// for (i=1;i<=3;++i) // 控制金字塔的层数，本例输出3层，可以改变输出任意层
// {
// for (j=1;j<=3-i;++j) // 控制金字塔每层前面输出的空格数
// printf(" ");
// for (j=1;j<=2*i-1;++j) // 控制金字塔每层需要打印'*'的个数
// printf("*");
// printf("\n"); // 一层金字塔输出完毕，换行继续输出下一层
// }
// }


int main(){
    int i,j;
    int ceng=0;
    printf("金字塔有几层：");
    scanf("%d",&ceng);
    for(i=1;i<=ceng;++i){
        for(j=1;j<=ceng-i;++j){
            putchar(' ');
        }
            for(j=1;j<=(i-1)*2+1;++j){
                putchar('*');                           
            }
            putchar('\n'); 
    }
}


    