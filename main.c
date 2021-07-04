#include <stdio.h>
#include <string.h>
#include "support.h"



int main(){
    int d = 1;
    while(d == 1){

        int a,b = 0;
        char c[5];

        printf("set two integer numbers separated by an enter\n");
        scanf("%d",&a);
        scanf("%d",&b);
        printf("choose the operation, plus, rest, div, mult, exit\n");
        scanf("%s",&c);

        if(strcmp(c,"plus") == 0){
            printf("%d\n", pluus(a,b));
        }else if(strcmp(c,"rest") == 0){
            printf("%d\n", rest(a,b));
        }else if(strcmp(c,"div") == 0){
            printf("%d\n", div(a,b));
        }else if(strcmp(c,"mult") == 0){
            printf("%d\n",mult(a,b));
        }else if(strcmp(c,"exit") == 0){
            printf("quiting...\n");
            d = 0;
        }

        printf("a is %d, b is %d, c is %s\n", a, b, c);

    }
    return 0;
}