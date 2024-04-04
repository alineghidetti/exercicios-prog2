#include <stdio.h>
#include "matrix_utils.h"

int main(){
    int rows1, cols1, rows2, cols2;
    int matrix1[rows1][cols1], matrix2[rows2][cols2];
    scanf("%d %d", &rows1, &cols1);
    matrix_read(rows1, cols1, matrix1);
    scanf("%d %d", &rows2, &cols2);
    matrix_read(rows2, cols2, matrix2);
    int opc=0;
    
    while(opc!=6){
        printf("1 - Somar matrizes\n2 - Subtrair matrizes\n3 - Multiplicar matrizes\n4 - Multiplicacao de uma matriz por escalar\n5 - Transposta de uma matriz\n6 - Encerrar o programa\nOpcao escolhida: \n");
        scanf("%d", &opc);
        if(opc==6){
            break;
        }
        else if(opc==1){
        }
    }
}