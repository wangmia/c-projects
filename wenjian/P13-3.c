// 改写代码清单13-2中的程序，将从文件读入的个人信息按身高排序后显示

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
   
    if((fp = fopen("hw.dat","r"))==NULL){
        printf("\a文件打开失败");
    }else{
        Person person[10];
        char name[32];
        double height, weight, h_sum=0, w_sum=0;
        int count = 0;
        while(fscanf(fp, "%s %lf %lf\n", name, &height, &weight)==3) {
        strcpy(person[count].name, name);
        person[count].height = height;
        person[count].weight = weight;
        count++;
        }

        sort_h(person, count);

        for(int i=0;i<count;i++){
            printf("%-10s%5.1lf%5.1lf\n",person[i].name,person[i].height,person[i].weight);
        }
        fclose(fp);
    }
}

void sort_h(Person a[], unsigned int n) {
    int i, j; 
    Person t;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1-i; j++) {
            if (a[j].height > a[j+1].height) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

}