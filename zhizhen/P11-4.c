/*
不使用下标运算符，编写如下函数，显示字符串s。
void put_string(const char *s)
*/

#include <stdio.h>

void put_string(const char *s){
    puts(s);
}

int main(){
    char *p = "NUMLE";
    put_string(p); 
}
