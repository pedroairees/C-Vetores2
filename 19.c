#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int vetor[50];

    for(int i = 0; i < 50; i++){
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    for(int i = 0; i < 50; i++){
        printf("%d,  ", vetor[i]);
    }

    return 0;
}
