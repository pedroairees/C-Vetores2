#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetor[5];
    int codigo;

    for(int i = 0; i < 5; i++){
        printf("\nN�mero %d -->   ", i + 1);
        scanf("%d", &vetor[i]);
    }

    system("cls");

    printf("Op��es:\n");
    printf("0 >> finalizar \n1 >> mostrar vetor na ordem escrita \n2 >> mostrar vetor na ordem inversa\n");
    printf("C�digo --> ");
    scanf("%d", &codigo);
    if(codigo == 0){
        system("cls");
        printf("Programa Finalizado com Sucesso!");
    } else if(codigo == 1){
        printf("\n\nOp��o 1:\n");
        for(int i = 0; i < 5; i++){
            printf("%d, ", vetor[i]);
        }
    } else if(codigo == 2){
        printf("\n\nOp��o 2:\n");
        for(int i = 4; i >= 0; i--){
            printf("%d, ", vetor[i]);
        }
    } else {
        printf("\n\nC�digo fornecido n�o reconhecido!");
    }

    return 0;
}
