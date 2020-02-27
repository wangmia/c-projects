/* 
0到7之间的不重复随机数 
数组存储随机数数据，在把新生成的元素和以前的元素比较如果相等返回去重新生成随机数。
*/
  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t t;
    int a[8] = {0};
    srand(time(&t));

    for(int i=0;i<7;i++){
        a[i] = rand() % 8;
        for(int j=0;j<i;j++){
            while(a[i]==a[j]){
                i--;
            }
        }
    }

    for(int i=0;i<7;i++){
        printf("%3d",a[i]);
    }

    return 0;
    
}
