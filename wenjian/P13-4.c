// 请采用代码清单13-2的文件写入形式，编写一个从键盘读取姓名、身高和体重,并将这些数据写入文件的程序。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[32];
    double height;
    double weight;
}Person;

void sort_h(Person a[], unsigned int n);

int main(){
    FILE *fp;
   
    if((fp = fopen("hw.dat","w"))==NULL){
        printf("\a文件打开失败");
    }else{
        Person person[10];
        int count=1;
        int i=0;
        // char name[32];
        // double height, weight, h_sum=0, w_sum=0;
        // int count = 0;
        // while(fscanf(fp, "%s %lf %lf\n", name, &height, &weight)==3) {
        // strcpy(person[count].name, name);
        // person[count].height = height;
        // person[count].weight = weight;
        // count++;
        // }
        while(count){
            scanf("%s",person[i].name);
            scanf("%lf",&person[i].height);
            scanf("%lf",&person[i].weight);
            count++;
            if((person[i].name)==0){
                count = 0;
                break;
            }
            i++;
        }
        
        // sort_h(person, count);

        for(int i=0;i<count;i++){
            fprintf(fp,"%-10s%5.1lf%5.1lf\n",person[i].name,person[i].height,person[i].weight);
        }
        fclose(fp);
    }
}

// void sort_h(Person a[], unsigned int n) {
//     int i, j; 
//     Person t;

//     for (i = 0; i < n-1; i++) {
//         for (j = 0; j < n-1-i; j++) {
//             if (a[j].height > a[j+1].height) {
//                 t = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = t;
//             }
//         }
//     }

// }