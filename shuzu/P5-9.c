/*
编写一段程序，纵向显示练习5-8中得到的分布图。
*/

#include <stdio.h>

#define NUMBER 80    /*人数上限*/

int main(void)
{
    int i, j;
    int num;              /*实际的人数*/
    int tensu[NUMBER];    /*学生的分数*/
    int bunpu[11] = {0};  /*分布图*/

    printf("请输入学生人数：");
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("请输入1-%d的数：", NUMBER);
    } while (num < 1 || num > NUMBER);
    
    printf("请输入%d人的分数。\n", num);

    for (i = 0; i < num; i++)
    {
        printf("%2d号:", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("请输入1-100的数：");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }
    int max = 0;
    for(int i=0;i<11;i++){
        if(max<bunpu[i]){
            max = bunpu[i];
        }
    }
    int sum = 0;
    puts("\n---分布图---");
    // for(int i=0;i<11;i++){
    //     sum=bunpu[i];
    //     if(bunpu[i]>0){
    //         for(int j=0;j<sum;j++){
    //         printf("   *");
    //         putchar('\n');
            
    //         }
    //     }else{
    //         for(int k=0;k<max;k++){
    //         printf("    ");
    //         putchar('\n');
    //         }
    //     }
              
    // }
    
    
        for(int i=0;i<max;i++){
        for(int j=0;j<11;j++){
        if(bunpu[j]>sum){
            printf("   *");          
        }else{
            printf("    ");
        }
        
        }
        putchar('\n');
        sum++;
    }
    
    // for(int i=max;i>0;i--){
    //     for(int j=10;j>=0;j--){
    //     if(bunpu[j]>sum){
    //         printf("   *");          
    //     }else{
    //         printf("    ");
    //     }
        
    //     }
    //     putchar('\n');
    //     sum++;
    // }


  
    
    // putchar('\n');
    printf("----------------------------------------------\n");
    for(int i=0;i<11;i++){
        printf("%4d",i*10);
    }

    return 0;
}