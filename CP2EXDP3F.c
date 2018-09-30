#include <stdio.h>
#include <stdlib.h>

/**
*   @author Patrick Araújo: https://github.com/patrickaraujo
*   Exercício de Programação 3 do capítulo 2 do livro Conceitos de Linguagens de Programação - Nona Edição de Robert Sebesta
*   Usando construções de repetição baseadas em contagem (for)
*   Using counting loop constructs (for)
*/

int main(){
    int linha1, coluna1, c, d;

    printf("\nEntre com o numero de linhas da matriz 1:\t");
    scanf("%d", &linha1);
    printf("\nEntre com o numero de colunas da matriz 1:\t");
    scanf("%d", &coluna1);

    int first[linha1][coluna1];

    printf("Entre com elementos da matriz 1\n");
    for (c = 0; c < linha1; c++)
        for (d = 0; d < coluna1; d++){
            printf("\nLinha %i, coluna %i:\t", c, d);
            scanf("%d", &first[c][d]);
        }


    int linha2, coluna2;
    printf("\nEntre com o numero de linhas da matriz 2:\t");
    scanf("%d", &linha2);
    printf("\nEntre com o numero de colunas da matriz 2:\t");
    scanf("%d", &coluna2);


    if (linha1 != linha2 && coluna1 != coluna2){
        printf("\nThe matrices can't be multiplied with each other.\n");
        exit(EXIT_SUCCESS);
    }

    printf("\nEntre com os elementos da matriz 2\n");
    int second[linha1][coluna1];
    for (c = 0; c < linha2; c++)
        for (d = 0; d < coluna2; d++){
            printf("\nLinha %i, coluna %i:\t", c, d);
            scanf("%d", &second[c][d]);
        }

    int multiply[linha1][coluna1];
    for (c = 0; c < linha1; c++)
        for (d = 0; d < coluna1; d++)
            multiply[c][d] = first[c][d]*second[c][d];

    printf("Produto das matrizes:\n");
    for (c = 0; c < linha1; c++) {
        for (d = 0; d < coluna1; d++)
            printf("%d\t", multiply[c][d]);
        printf("\n");
    }

    return 0;
}
