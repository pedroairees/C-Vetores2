#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetor[10];
    int vetorMultiplo[10];
    int num;

    for(int i = 0; i < 10; i++){
        printf("N�mero %d >>  ", i + 1);
        scanf("%d", &vetor[i]);
    }
    system("cls");
    for(int i = 0; i < 10; i++){
        printf("N�mero %d --> %d\n", i + 1, vetor[i]);
    }
    printf("\n\nEscolha um n�mero (1 a 10) para ver os multiplos dele!\n");
    printf("N�mero >>> ");
    scanf("%d", &num);

    if(num > 0 && num <= 10){
        for(int i = 0; i < 10; i++){
            vetorMultiplo[i] = vetor[num - 1] * (i + 1);
        }
        printf("\n");
        for(int i = 0; i < 10; i++){
            printf("\n%d * %d ---> %d", vetor[num - 1], i + 1, vetorMultiplo[i]);
        }
    } else {
        printf("\nEscolha entre os n�meros existentes (1 a 10)!");
    }

    return 0;
}
