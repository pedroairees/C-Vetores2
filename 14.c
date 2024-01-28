#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetor[10];
    int repetidos = 0;

    for(int i = 0; i < 10; i++){
        printf("\nNúmero %d -->  ", i + 1);
        scanf("%d", &vetor[i]);
    }

    system("cls");
    for(int j = 0; j < 10; j++){
        int contagem = 0;
        for(int rep = 0; rep < 10; rep++){
            if(vetor[j] == vetor[rep]){
                contagem++;
            }
        }
            if(contagem > 1){
                    printf("\nNúmero %d é repetido %d vezes!", vetor[j], contagem);
                    repetidos++;
                }
        }
    printf("\nTotal de repetidos --> %d", repetidos);

    return 0;
}
