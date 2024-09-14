#include <stdio.h>

#define MAX 100

//função para buscar na matriz
int busc_mat(int matriz[MAX][MAX], int lines, int columns, int element, int *line_encont, int *colum_encont){
    for(int i = 0; i < lines; i++){
        for(int j = 0; i < columns; j++){
            if(matriz[i][j] == element){
                *line_encont = i;
                *colum_encont = j;
                return 1; //elemento localizado
            }
        }
    }
    return 0; //elemento não localizado
}

int main(){
    int matriz[MAX][MAX], lines, columns, element;
    int line_encont, colum_encont;

    //entrada de dimensões na matriz
    printf("insira o número de linhas e colunas na matriz: ");
    scanf("%d %d", &lines, &columns);

    //entrada de elementos da matriz
    printf("insira os elementos da matriz: \n");
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    //entrada do elemento que será buscado
    printf("insira o elemento a ser buscado: ");
    scanf("%d", &element);

    //chamada da função de busca
    if(busc_mat(matriz, lines, columns, element, &line_encont, &colum_encont)){
        printf("elemento %d encontrado na posição (%d, %d)\n", element, line_encont, colum_encont);
    }else{
        printf("elemento %d não encontrado na matriz.\n", element);
    }
    return 0;
}