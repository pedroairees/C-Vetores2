#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    //iniciando variaveis
    int numeroAluno[10];
    float alturaAluno[10];

    //recebendo dados
    for(int i = 0; i < 10; i++){
        printf("Aluno >>>  ");
        scanf("%d", &numeroAluno[i]);
        printf("Altura (em metro, exempo: 1,80) >>>  ");
        scanf("%f", &alturaAluno[i]);
        printf("\n");
    }

    //vendo qual o mais alto e baixo
    int indiceAlto = 0, indiceBaixo = 0;

    for(int i = 0; i < 10; i++){
        if(alturaAluno[i] > alturaAluno[indiceAlto]){
            indiceAlto = i;
        }
        if(alturaAluno[i] < alturaAluno[indiceBaixo]){
            indiceBaixo = i;
        }
    }
    system("cls");

    //Exibição de resultado
    printf("Aluno %d, é o mais alto, com o tamanho de %.1f metros!!\n", numeroAluno[indiceAlto], alturaAluno[indiceAlto]);
    printf("Aluno %d, é o mais baixo, com o tamanho de %.1f metros!!\n", numeroAluno[indiceBaixo], alturaAluno[indiceBaixo]);


    return 0;
}
