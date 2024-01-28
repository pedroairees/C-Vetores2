#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetor[5];
    int codigo;

    for(int i = 0; i < 5; i++){
        printf("\nNúmero %d -->   ", i + 1);
        scanf("%d", &vetor[i]);
    }

    system("cls");

    printf("Opções:\n");
    printf("0 >> finalizar \n1 >> mostrar vetor na ordem escrita \n2 >> mostrar vetor na ordem inversa\n");
    printf("Código --> ");
    scanf("%d", &codigo);
    if(codigo == 0){
        system("cls");
        printf("Programa Finalizado com Sucesso!");
    } else if(codigo == 1){
        printf("\n\nOpção 1:\n");
        for(int i = 0; i < 5; i++){
            printf("%d, ", vetor[i]);
        }
    } else if(codigo == 2){
        printf("\n\nOpção 2:\n");
        for(int i = 4; i >= 0; i--){
            printf("%d, ", vetor[i]);
        }
    } else {
        printf("\n\nCódigo fornecido não reconhecido!");
    }

    return 0;
}
