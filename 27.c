#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetorInteiro[10];
    for(int i = 0; i < 10; i++){
        printf("Vetor[%d] >>>  ", i);
        scanf("%d", &vetorInteiro[i]);
    }

    system("cls");
    printf("Números primos e suas posições:\n");
    for(int i = 0; i < 10; i++){
        int ePrimo = 1;

        if(vetorInteiro[i] <= 1){
            ePrimo = 0;
        } else {
            for(int j = 2; j * j <= vetorInteiro[i]; j++){
                if(vetorInteiro[i] % j == 0){
                    ePrimo = 0;
                    break;
                }
            }
        }
        if(ePrimo){
            printf("\nNúmero %d, posição %d", vetorInteiro[i], i);
        }
    }

    return 0;
}
