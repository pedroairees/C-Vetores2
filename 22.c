#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetor1[10], vetor2[10], vetorResult[20];

    printf("Primeiro vetor:\n\n");
    for(int i = 0; i < 10; i++){
        printf("Posição %d >>>  ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    system("cls");
    printf("Segundos vetor:\n\n");
    for(int i = 0; i < 10; i++){
        printf("Posição %d >>>  ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    system("cls");
    for(int i = 0, j = 0; i < 20; i += 2, j++){
        vetorResult[i] = vetor1[j];
        vetorResult[i + 1] = vetor2[j];
    }

    printf("Vetor resultado:\n\n");
    for(int i  = 0; i < 20; i++){
        printf("%d, ", vetorResult[i]);
    }

    return 0;
}
