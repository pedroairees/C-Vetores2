#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float vetorX[5], vetorY[5];

    //recebendo os valores do conjunto X
    printf("Informe números reais para o conjunto X: \n");
    for(int i = 0; i < 5; i++){
        printf("Número %d >>>  ", i + 1);
        scanf("%f", &vetorX[i]);
    }

    //recebendo os valores do conjunto Y
    printf("\n\nInforme números reais para o conjunto Y: \n");
    for(int i = 0; i < 5; i++){
        printf("Números %d >>>  ", i + 1);
        scanf("%f", &vetorY[i]);
    }

    system("cls");
    //calcular o produto escalar dos conjuntos
    float produtoEscalar = 0;
    for(int i = 0; i < 5; i++){
        produtoEscalar += vetorX[i] * vetorY[i];
    }

    //imprimindo informações na tela
    printf("Conjunto X --> ");
    for(int i = 0; i < 5; i++){
        printf("%.1f, ", vetorX[i]);
    }

    printf("\nConjunto Y --> ");
    for(int i = 0; i < 5; i++){
        printf("%.1f, ", vetorY[i]);
    }

    printf("\nProduto escalar --> %.1f", produtoEscalar);

    return 0;
}
