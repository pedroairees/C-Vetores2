#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetorOriginal[20];
    int vetorSemRepeticao[20];
    int marcador[20] ={0};
    int indiceNovoVetor = 0;

    for(int i = 0; i < 20; i++){
        printf("Número %d -->  ", i + 1);
        scanf("%d", &vetorOriginal[i]);
    }

    system("cls");
    for(int i = 0; i < 20; i++){
        for(int rep = 0; rep < 20; rep++){
            if(vetorOriginal[i] == vetorOriginal[rep] && i != rep){
                marcador[i] = 1;
            }
        }
    }

    for(int i = 0; i < 20; i++){
        if(marcador[i] == 0){
            vetorSemRepeticao[indiceNovoVetor] = vetorOriginal[i];
            indiceNovoVetor++;
        }
    }

    for(int i = 0; i < indiceNovoVetor; i++){
        printf("\n%d", vetorSemRepeticao[i]);
    }

    return 0;
}
