//
// Created by JoézerGonçalvesPerei on 14/08/2026.
//

#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER03ROTACAODEVETORADIREITA_H
#define ED1_ALGORITHMS_EXERCISES_CPP_EXER03ROTACAODEVETORADIREITA_H

#endif //ED1_ALGORITHMS_EXERCISES_CPP_EXER03ROTACAODEVETORADIREITA_H

#include<stdio.h>

int main(){

    int tam, quant;
    scanf("%d %d", &tam, &quant);

    int vetor[tam], vetorresul[tam];
    int inicio = 0;
    int posi = quant;
    int i;

    for(i=0; i<tam; i++){
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<tam; i++){
        if(i<tam-quant){
            vetorresul[posi] = vetor[i];
            posi++;
        }else{
            vetorresul[inicio] = vetor[i];
            inicio++;
        }
    }

    for(i=0; i<tam; i++){
        printf("%d ", vetorresul[i]);
    }

}

/*
Exemplo de Entrada		Exemplo de Saída
7 3						5 6 7 1 2 3 4
1 2 3 4 5 6 7
------------------------------------------
4 2 					3 99 -1 -100
-1 -100 3 99
------------------------------------------
6 2						6 7 3 4 5 8
3 4 5 8 6 7
*/

