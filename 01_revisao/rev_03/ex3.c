#include <stdio.h>

typedef struct{
    int codigo;
}tLivro;

int main(){

    int i=0, qtd, cont=0, imprimiu=0;
    scanf("%d", &qtd);
    tLivro livro[qtd];
    tLivro comprar[qtd];

    //LEITURA DOS CÓDIGOS
    for(i=0; i<qtd; i++){
        scanf("%d", &livro[i].codigo);
    }

    //ORDENAÇÃO, REVISÃO
    for (i = 0; i < qtd - 1; i++) {
        for (int j = 0; j < qtd - i - 1; j++) {
            if (livro[j].codigo > livro[j + 1].codigo) {
                tLivro temp = livro[j];
                livro[j] = livro[j + 1];
                livro[j + 1] = temp;
            }
        }
    }

    for(i=0; i<qtd; i++){
        for(int k = 0; k<qtd; k++){
            if(livro[i].codigo==livro[k].codigo){
                cont++;
            }
        }
        if (cont == 1){
            printf("%d ", livro[i].codigo);
            imprimiu++;
        }
        cont=0;
    }
    if (imprimiu==0){
        printf("NENHUM");
    }
}