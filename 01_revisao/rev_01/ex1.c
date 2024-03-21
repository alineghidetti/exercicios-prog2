#include <stdio.h>
#include <math.h>

int main() {
    float xAlvo, yAlvo, rAlvo, xDisparo, yDisparo, rDisparo;
    float distancia; 
    scanf("%f %f %f %f %f %f", &xAlvo, &yAlvo, &rAlvo, &xDisparo, &yDisparo, &rDisparo);
    distancia = sqrt((pow((xAlvo-xDisparo), 2)) + (pow((yAlvo-yDisparo), 2)));
    if (distancia <=(rDisparo + rAlvo)) { 
        printf("ACERTOU");
    } else {
        printf("ERROU");
    }

    return 0;
}
