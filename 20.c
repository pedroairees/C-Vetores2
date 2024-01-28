#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    // var do vetor principal
    int vetor[10];
    //var do vetor de números IMPARES
    int vetorImpar[10];
    //var para a contagem de impares
    int impares = 0;

    printf("Informe números entre 0 e 50!!!!\n");
    //coletando os números para o vetor
    for(int i = 0; i < 10; i++){
        printf("Número %d >> ", i + 1);
        scanf("%d", &vetor[i]);
        if(vetor[i] < 0 || vetor[i] > 50){
            printf("\nEsse número não está entre (0 e 50), tente novamente!!!\n");
            i--;
        } else if(vetor[i]%2 != 0){
            impares++;
        }
    }

    //limpa a tela
    system("cls");

    //exibição vetor completo (principal)
    printf("Vetor Original:\n");
    for(int i = 0; i < 10; i++){
        printf("%d, ", vetor[i]);
    }

    //variavel para guardar o indice do vetor Impar
    int indiceImpares = 0;
    //separar os impares
    for(int i = 0; i < 10; i++){
        if(vetor[i]%2 != 0){
            vetorImpar[indiceImpares] = vetor[i];
            indiceImpares++;
        }
    }

    //exibir vetor somente de números IMPARES
    printf("\n\nVetor com os números IMPARES:\n");
    for(int i = 0; i < impares; i++){
        printf("%d, ", vetorImpar[i]);
    }

    return 0;
}
