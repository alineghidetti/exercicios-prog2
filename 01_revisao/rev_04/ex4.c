#include <stdio.h>

int conversao(int decimal, int base){
    if(decimal/base != 0){ conversao(decimal/base, base);}
    printf("%d", decimal%base);
}

int main(){

    int octal, decimal;
    int i, j;

    scanf("%d", &decimal);
    conversao(decimal, 8);


    return 0;
}