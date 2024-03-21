#include <stdio.h>

void conversao(int decimal, int base) {
    int cont = 0;
    int i;
    int numero[256];
    while (decimal != 0) {
        numero[cont] = decimal % base;
        decimal = decimal / base;
        cont++;
    }
    for(i = cont-1 ; i >= 0; i--) {
        printf("%d", numero[i]);
    }
}

int main() {
    int decimal;

    scanf("%d", &decimal);
    conversao(decimal, 8);

    return 0;
}
