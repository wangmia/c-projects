/*
将代码清单11-3中对p的赋值进行如下修改。
p = "456" + 1;
请编写程序确认运行结果，并对运行结果进行分析。
*/

// 会整体向右让一位变成56

#include <stdio.h>
int main(){
    char *p = "123";
    printf("p=  \"%s\"\n",p);
    p = "456"+1;
    printf("p= \"%s\"\n",p);
    return 0;
}