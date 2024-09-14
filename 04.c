#include <stdio.h>

#define MAX 100

//função que ordena uma linha de uma matriz em ordem crescente
void ord_line_cresc(int matriz[MAX][MAX], int line, int columns){
    int temp;
    for(int i = 0; i < columns - 1; i++){
        for(int j = 0; j < columns - 1 - i; j++){
            if(matriz[line][j] > matriz[line][j + 1]){
                //trocar os elementos
                temp = matriz[line][j];
                matriz[line][j] = matriz[line][j + 1];
                matriz[line][j + 1] = temp;
            }
        }
    }
}

//função que ordena uma coluna de uma matriz em ordem crescente
void ord_column_cresc(int matriz[MAX][MAX], int lines, int column){
    int temp;
    for(int i = 0; i < lines - 1; i++){
        for(int j = 0; j < lines - 1; j++){
            if(matriz[j][column] > matriz[j + 1][column]){
                //trocar os elementos
                temp = matriz[j][column];
                matriz[j][column] = matriz[j + 1][column];
                matriz[j + 1][column] = temp;
            }
        }
    }
}

//função que exibe a matriz
void exb_mat(int matriz[MAX][MAX], int lines, int columns){
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriz[MAX][MAX], lines, columns, option, indice;

    //entrada de dimensões da matriz
    printf("insira o número de linhas e colunas da matriz: ");
    scanf("%d %d", &lines, &columns);

    //entrada de elementos da matriz
    printf("insira os elementos da matriz: \n");
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("matriz original:\n");
    exb_mat(matriz, lines, columns);

    //opção para ordenar linha ou coluna
    printf("digite 1 para ordenar uma linha ou 2 para ordenar uma coluna: ");
    scanf("%d", &option);

    if(option == 1){
        printf("insira o índice da linha que será ordenada (0 a %d): ", lines - 1);
        scanf("%d", &indice);

        //ordenar a linha
        ord_line_cresc(matriz, indice, columns);
        printf("matriz após ordenar a linha %d em ordem crescente: \n", indice);
        exb_mat(matriz, lines, columns);
    }else if(option == 2){
        printf("digite o índice da coluna a ser ordenada (0 a %d): ", columns - 1);
        scanf("%d", &indice);

        //ordenar a coluna
        ord_column_cresc(matriz, lines, indice);
        printf("matriz após ordenar a coluna %d em ordem crescente: \n", indice);
        exb_mat(matriz, lines, columns);
    }else{
        printf("opção inválida!\n");

        return 0;
    }
}