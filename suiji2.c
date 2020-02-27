/* 用交换法显示0-7的随机数 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SHU 8
int swap(int *a,int *b);

int main(){
    int a[SHU] = {0,1,2,3,4,5,6,7};
    time_t t;  
    srand(time(&t));
    // int l = rand() % 8;
    for(int i=0;i<SHU;i++){
        // int l = rand() % (8-i);
        int l = rand() % 8;
        swap(&a[l],&a[i]);
    } 
    for(int i=0;i<SHU;i++){
        printf("%3d",a[i]);
    }
    putchar('\n');
    return 0;
}

int swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return *b;
}