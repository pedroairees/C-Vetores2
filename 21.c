#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    //var de vetores das 2 listas recebidas os valores do usuario
    int primeraLista[10], segundaLista[10];
    //lista de subtração das duas lista
    int terceiraLista[10];

    //receber valores da primeira lista
    printf("Insira os valores da primera lista:\n\n");
    for(int i = 0; i < 10; i++){
        printf("Número %d >>>  ", i + 1);
        scanf("%d", &primeraLista[i]);
    }

    //limpa tela e receber valores da segunda lista
    system("cls");
    printf("Insira os valores da segunda lista:\n\n");
    for(int i = 0; i < 10; i++){
        printf("Número %d >>>  ", i + 1);
        scanf("%d", &segundaLista[i]);
    }

    //limpa tela e calcula a subtração e guarda na terceira lista
    system("cls");
    for(int i = 0; i < 10; i++){
        terceiraLista[i] = primeraLista[i] - segundaLista[i];
    }

    //imprime a terceira lista com os resultados
    for(int i = 0; i < 10; i++){
        printf("%d - %d = %d\n", primeraLista[i], segundaLista[i], terceiraLista[i]);
    }

    return 0;
}
