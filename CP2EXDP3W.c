#include <stdio.h>
#include <stdlib.h>

/**
*   @author Patrick Araújo: https://github.com/patrickaraujo
*   Exercício de Programação 3 do capítulo 2 do livro Conceitos de Linguagens de Programação - Nona Edição de Robert Sebesta
*   Usando laços de repetição lógicos (while)
*   Using logical loops (while)
*/

int main(){
    int linha1, coluna1;

    printf("\nEntre com o numero de linhas da matriz 1:\t");
    scanf("%d", &linha1);
    printf("\nEntre com o numero de colunas da matriz 1:\t");
    scanf("%d", &coluna1);

    int first[linha1][coluna1];

    printf("Entre com elementos da matriz 1\n");
    int c = 0;
    while(c < linha1){
        int d = 0;
        while(d < coluna1){
            printf("\nLinha %i, coluna %i:\t", c, d);
            scanf("%d", &first[c][d]);
            d++;
        }
        c++;
    }

    int linha2, coluna2;
    printf("\nEntre com o numero de linhas da matriz 2:\t");
    scanf("%d", &linha2);
    printf("\nEntre com o numero de colunas da matriz 2:\t");
    scanf("%d", &coluna2);


    if (linha1 != linha2 && coluna1 != coluna2){
        printf("\nAs matrizes não podem ser multiplicadas\n");
        exit(EXIT_SUCCESS);
    }

    printf("\nEntre com os elementos da matriz 2\n");
    int second[linha1][coluna1];
    c = 0;
    while(c < linha2){
        int d = 0;
        while(d < coluna2){
            printf("\nLinha %i, coluna %i:\t", c, d);
            scanf("%d", &second[c][d]);
            d++;
        }
        c++;
    }

    int multiply[linha1][coluna1];
    c = 0;
    while(c < linha1){
        int d = 0;
        while(d < coluna1){
            multiply[c][d] = first[c][d]*second[c][d];
            d++;
        }
        c++;
    }

    printf("Produto das matrizes:\n");
    c = 0;
    while(c < linha1){
        int d = 0;
        while(d < coluna1){
            printf("%d\t", multiply[c][d]);
            d++;
        }
        printf("\n");
        c++;
    }

    return 0;
}
