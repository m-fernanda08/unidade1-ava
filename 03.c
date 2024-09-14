#include <stdio.h>

//função que ordena o vetor em ordem crescente
void ord_cresc(int vetor[], int tam){
    int i, j, temp;
    for(i = 0; i < tam - 1; i++){
        for(j = 0; j < tam - 1 - i; j++){
            if(vetor[j] > vetor[j + 1]){
                //trocar os elementos
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

//função que ordena o vetor em ordem decrescente
void ord_decres(int vetor[], int tam){
    int i, j, temp;
    for(i = 0; i < tam - 1; i++){
        for(j = 0; j < tam - 1 - i; j++){
            if(vetor[j] < vetor[j + 1]){
                //trocar os elementos
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

//função que exibe o vetor
void exb_vet(int vetor[], int tam){
    for(int i = 0; i < tam; i++){
        printf("%d", vetor[i]);
    }
    printf("\n");
}

int main(){
    int vetor[] = {64, 34, 25, 12, 22, 11, 90};
    int tam = sizeof(vetor)/sizeof(vetor[0]);

    printf("vetor original:\n");
    exb_vet(vetor, tam);

    //ordenar em ordem crescente
    ord_cresc(vetor, tam);
    printf("vetor em ordem crescente:\n");
    exb_vet(vetor, tam);

    //ordenar em ordem decrescente
    ord_decres(vetor, tam);
    printf("vetor em ordem decrescente:\n");
    exb_vet(vetor, tam);

    return 0;
}