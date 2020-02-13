// 对代码清单5-8中的程序进行修改，改为用对象式宏来定义元素个数。注意需要找到有关元素交换次数的规则。

#include <stdio.h>
#define NUME 7

int main(void){
    int i;
    int x[NUME];

    for (i = 0; i < NUME; i++)
    {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 3; i++)
    {
        int temp = x[i];
        x[i] = x[(NUME-1) - i];
        x[(NUME-1) - i] = temp;
    }

    puts("倒序排列了。");
    for (i = 0; i < NUME; i++)
        printf("x[%d] = %d\n", i, x[i]);

    return 0;
}