/*
创建一个函数，将4行3列矩阵a和3行4列矩阵b的乘积，存储在3行3列矩阵c中。
void mat_mul(const int a[4][3],const int b[3][4],int c[3][3])
*/

#include <stdio.h>

void mat_mul(const int a[4][3],const int b[3][4],int c[4][4]){
    
    for(int i=0;i<4;i++){
        int f =0;
        for(int h=0;h<4;h++){
            for(int j=0;j<3;j++){
                c[i][h]+= a[i][j]*b[j][f];
            }
            f++;
        }                 
    }
    putchar('{');
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",c[i][j]);
        }
    }
    putchar('}');
 
}

int main(){
    int a[4][3] = {{1,2,3},{4,5,6},{7,8,9},{3,4,5}};
    int b[3][4] = {{1,2,3,4},{5,6,7,8},{9,3,4,5}};
    int c[4][4] = {0};
    printf("数组a={");
   
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
    }
    putchar('}');
    printf("数组b={");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",b[i][j]);
        }
    }
    putchar('}');
    printf("输出数组c:");
    mat_mul(a,b,c);
    putchar('\n');
}
