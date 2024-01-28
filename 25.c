#include <stdio.h>

int main(void){
    int tamanho = 100;

    int vetor[100];
    int numero = 1;

    for(int i = 0; i < tamanho; ){
        if(numero % 7 != 0 && numero % 10 != 7){
            vetor[i] = numero;
            i++;
        }
        numero++;
    }

    printf("Vetor preenchido:\n");
    for(int i = 0; i < tamanho; i++){
        printf("%d, ", vetor[i]);
    }

    return 0;
}
