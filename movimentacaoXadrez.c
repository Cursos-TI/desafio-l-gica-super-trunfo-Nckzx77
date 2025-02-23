#include <stdio.h>

void recursividadeTorre (int n){
    if (n > 0){
        printf("Direita \n"); 
        recursividadeTorre(n - 1);
    }

}

void recursividadeQueen (int n){
    if (n > 0){
        printf("Esquerda \n"); 
        recursividadeQueen(n - 1);
    }

}

void recursividadeBispo (int n){
    if (n > 0){
        printf("Cima, ");
        printf("Direita \n");
        recursividadeBispo(n - 1);
    }

}


int main(){
    printf("Movimentação Torre: \n");
    recursividadeTorre(5);

    printf("\nMovimentação Rainha: \n");
    recursividadeQueen(8);

    printf("\nMovimentação Bispo: \n");
    recursividadeBispo(5);


    return 0;

}