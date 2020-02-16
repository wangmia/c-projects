/*
编写如下函数，将*y年*m月*d日的日期，修改为其前一天或后一天的曰期。
void decrement_date(int *y,int *m,int *d)
void increment_date(int *y,int *m,int *d)
注意计算时要考虑到闰年的问题。
*/

#include <stdio.h>

/* 前一天 */
void decrement_date(int *y,int *m,int *d){
//用er判断是否进入过闰年函数
    int er = 0;

    if(*y%400==0||(*y%4==0&&*y%100!=0)){
        er = 1;
        if(*m == 2){
            if(*d > 29&& *d<=0){
                puts("输入的日期不正确");
            }else{
                if(*d == 1){
                    *m -= 1;
                    *d = 31;
                }else{
                    *d -= 1;
                }
            }
        }
    }
    if(*m<0||*m>12){
            puts("输入的月份不正确");
    }else if(*m==1||*m ==3||*m==5||*m==7||*m==8||*m==10||*m==12){
            if(*m!=1&&*d==1){
                *m -= 1;
                if(*m == 2){
                    if(er==1){
                        *d = 29;
                    }else{
                        *d = 28;
                    }                 
                }else if(*m==7){
                    *d = 31;
                }else{
                    *d = 30;
                }
            }else if(*m == 1&& *d==1){
                *y -= 1; 
                *m = 12; 
                *d = 31;
            }else if(*d>31){
                puts("输入的日期不正确");
            }else{
                *d -= 1;
            }
    }else if(*m ==4||*m==6||*m==9||*m == 11){
            if(*d>30){
                puts("输入的日期不正确");
            }else if(*d==1){
                *m -= 1;
                *d = 31;
            }else{
                *d -= 1;
            }
        
    }
}

/* 后一天 */
void increment_date(int *y,int *m,int *d){
    //判断是否是闰年
    int run = 0;
    //对应的月份有多少天
    int day = 0;

    if(*y%400==0||(*y%4==0&&*y%100!=0)){
        run = 1;
    }

    if(*m==2){
        if(run == 1){
            day = 29;
        }else{
            day = 28;
        }
    }else if(*m==1||*m ==3||*m==5||*m==7||*m==8||*m==10||*m==12){
        day = 31;
    }else if(*m==4||*m==6||*m==9||*m==11){
        day = 30;
    }else{
        puts("输入的月份不正确");
    }
    
    if(*d<0||*d>day){
        puts("输入的日期不正确");
    }else{       
        if(*d!=day){
            *d += 1;
        }else{
            if(*m == 12){
                *y += 1;
                *m = 1;
            }else{
                *m += 1;
            }
            *d = 1;
        }
    }
}

int main(){
    int a,b,c;
    printf("请输入年份：");
    scanf("%d",&a);
    printf("请输入月份：");
    scanf("%d",&b);
    printf("请输入日期：");
    scanf("%d",&c);
    // decrement_date(&a,&b,&c);
    increment_date(&a,&b,&c);
    printf("-----------------\n");
    // printf("你输入日期的前一天是 %d.%d.%d\n",a,b,c);
    printf("你输入日期的后一天是 %d.%d.%d\n",a,b,c);
    
    

}