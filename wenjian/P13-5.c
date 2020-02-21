/*
在代码清单13-4的程序中加上表示当前“心情”的字符串。即在显示上一次的运行时间(和上一次的心情)之后提示输入“当前的心情:”，从键盘读入字符串再写入文件。例如，如果输入“极好!!”，那么程序在下一次运行时就应显示“上一次运行是在XXXX年XX月XX日XX时XX分XX秒，心情极好!!”。
*/

#include <time.h>
#include <stdio.h>

char data_file[] = "datetime.dat";

void get_data(void){
    FILE *fp;
    if ((fp = fopen(data_file, "r")) == NULL)
        printf("本程序第一次运行\n");
    else {
        int year, month, day, h, m, s;

        fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
        printf("上一次运行是在%d年%d月%d日%d时%d分%d秒\n", year, month, day, h, m, s);

        fclose(fp);
    }
}

void put_data(char *mood){
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    if ((fp = fopen(data_file, "w")) == NULL)
        printf("文件打开失败\n");
    else {
        fprintf(fp, "%d  %d  %d  %d  %d  %d\n",
                timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
                timer->tm_hour, timer->tm_min, timer->tm_sec);
        fprintf(fp, "%s\n", mood);
        fclose(fp);
    }
}

int main(void){
    char mood[50];
    get_data();
    printf("当前心情：");
    scanf("%s",mood);
    put_data(mood);
    return 0;
}