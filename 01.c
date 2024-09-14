/*Implementar uma função de pesquisa em vetores que recebe como parâmetros o vetor, 
seu tamanho e o elemento a ser buscado. A função deve retornar a posição do elemento 
no vetor ou -1 caso o elemento não seja encontrado.*/

#include <stdio.h>

//função de busca no vetor
int busc_vet(int vetor[], int tam, int element){
    for(int i = 0; i < tam; i++){
        if(vetor[i] == element){
            return i; //vai retornar a posição do elemento encontrado
        }
    }
    return -1; //retorna se o elemento não for encontrado
}

int main(){
    int vetor[] = {10, 20, 30, 40, 50};
    int tam = sizeof(vetor)/sizeof(vetor[0]);
    int element, position;

    printf("insira o elemento a ser buscado: ");
    scanf("%d", &element);

    //chama a função de busca
    position = busc_vet(vetor, tam, element);

    if(position != -1){
        printf("elemento %d encontrado na posição %d\n", element, position);
    }else{
        printf("elemento %d não localizado no vetor\n", element);
    }
}