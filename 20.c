#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    // var do vetor principal
    int vetor[10];
    //var do vetor de n�meros IMPARES
    int vetorImpar[10];
    //var para a contagem de impares
    int impares = 0;

    printf("Informe n�meros entre 0 e 50!!!!\n");
    //coletando os n�meros para o vetor
    for(int i = 0; i < 10; i++){
        printf("N�mero %d >> ", i + 1);
        scanf("%d", &vetor[i]);
        if(vetor[i] < 0 || vetor[i] > 50){
            printf("\nEsse n�mero n�o est� entre (0 e 50), tente novamente!!!\n");
            i--;
        } else if(vetor[i]%2 != 0){
            impares++;
        }
    }

    //limpa a tela
    system("cls");

    //exibi��o vetor completo (principal)
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

    //exibir vetor somente de n�meros IMPARES
    printf("\n\nVetor com os n�meros IMPARES:\n");
    for(int i = 0; i < impares; i++){
        printf("%d, ", vetorImpar[i]);
    }

    return 0;
}
