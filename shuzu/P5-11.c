// 编写一段程序，输入6名学生2门课程(语文、数学)的分数，显示各门课程的总分和平均分，以及各个学生的总分和平均分。

#include <stdio.h>

int main(void)
{
    int fenshu[6][2] = {{61,29},{50,79},{18,100},{99,88},{77,66},{55,77}};
    int sum[1][2] = {0};
    double gve[1][2] = {0};
    int xsum[6] ={0};
    double xgve[6]={0};
    int c=0;
    for(int j=0;j<2;j++){
        
        for(int i=0;i<6;i++){
        sum[j-c][c] += fenshu[i][c];
        gve[j-c][c] = sum[j-c][c]/6.0;
        }
        c++;
    }

    for(int i=0;i<6;i++){
        for(int j=0;j<2;j++){
            xsum[i] += fenshu[i][j];
            printf("xum=%d",xsum[i]);
            xgve[i] += xsum[i]/2.0;
        }
    }


    printf("显示语文和数学的总分以及平均分");
    for(int i=0;i<1;i++){
        for(int j=0;j<2;j++){
            printf(" %d",sum[i][j]);
            printf(" %.2lf",gve[i][j]);
        }
    }
    putchar('\n');
   
    printf("显示每个学生的总分和平均分");
    for(int i=0;i<6;i++){
        printf(" %d",xsum[i]);
        printf(" %.2lf",xgve[i]);
    }
    putchar('\n');

      
    return 0;
}