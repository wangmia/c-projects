/* 假设变量a是double型，变量b是int型，请说明经过下述赋值后a和b的值分别是多少。
a = b = 1.5;
*/

#include <stdio.h>
int main(){
    int b = 3;
    double a = 3.0;
    a = b = 1.5;
    printf("%3d,%3.2lf",b,a);
}

//a=1.00  b = 1;
