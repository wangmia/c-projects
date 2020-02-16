#include <stdio.h>
int main(){
    int i;
    char a[][5] = {"LISP","C","Ada"};
    char *p[] = {"PAUL","X","MAC"};
    for(i=0;i<3;i++){
        printf("a[%d] = \"%d\"\n",i,a[i]);
    }
    for(i=0;i<3;i++){
        printf("p[%d] = \"%d\"\n",i,p[i]);
    }
    return 0;
}