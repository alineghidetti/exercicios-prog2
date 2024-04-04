#include <stdio.h>
#include "matrix_utils.h"

int main(){
    int rows, cols, opc;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    matrix_read(rows, cols, int matrix);
    scanf("%d", opc);

    switch(opc){
        case 1:
            possible_matrix_sum;
            matrix_add;

        case 2:
            possible_matrix_sub;
            matrix_sub;
    }
}