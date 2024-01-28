#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Número %d >> ", i + 1);
        scanf("%d", &vetor[i]);
    }
    system("cls");

    for(int i = 0; i < 10; i++){
        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }

    for(int i = 0; i < 10; i++){
        printf("\nNúmero %d --> %d", i + 1, vetor[i]);
    }

    return 0;
}
