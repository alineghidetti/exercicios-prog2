#include "matrix_utils.h"

void matrix_read(int rows, int cols, int matrix[rows][cols]){
    int i, j;
    for(i=0; i<cols; i++){
        for(j=0; j<rows; j++){
            scanf("%d", &matrix[rows][cols]);
        }
    }
}

void matrix_print(int rows, int cols, int matrix[rows][cols]){
    int i, j;
    for(i=0; i<cols; i++){
        for(j=0; j<rows; j++){
            printf("%d", matrix[rows][cols]);
        }
    }
}

int possible_matrix_sum(int rows1, int cols1, int rows2, int cols2){
    if(rows1 == rows2 && cols1 == cols2){
        return 1;
    }
    return 0;
}

int possible_matrix_sub(int rows1, int cols1, int rows2, int cols2){
    if(rows1 == rows2 && cols1 == cols2){
        return 1;
    }
    return 0;
}

int possible_matrix_multiply(int cols1, int rows2){
    if(cols1 == rows2);
}


void matrix_add(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1]){
    int i, j, k, l;
    for(i=0; i<rows1; i++){
        for(j=0; j<cols1; j++){
            matrix1[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void matrix_sub(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1]){
    int i, j, k, l;
    for(i=0; i<rows1; i++){
        for(j=0; j<cols1; j++){
            matrix1[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}


void matrix_multiply(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2]){
    int i, j, k;

    for(i=0; i<rows1; i++){
        for(j=0; j<cols2; j++){
            result[i][j]=0;
            for(k=0; k<cols1; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void transpose_matrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]){
    int i, j;

    for(i=0; i<cols; i++){
        for(j=0; j<rows; j++){
            result[i][j] = matrix[j][i];
        }
    }
}

void scalar_multiply(int rows, int cols, int matrix[rows][cols], int scalar){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            matrix[i][j] *= scalar;
        }
    }
}