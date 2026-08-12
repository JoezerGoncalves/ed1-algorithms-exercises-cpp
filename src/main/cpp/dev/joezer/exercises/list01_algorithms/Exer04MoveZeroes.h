//
// Created by JoézerGonçalvesPerei on 11/08/2026.
//

#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER04MOVEZEROES_H
#define ED1_ALGORITHMS_EXERCISES_CPP_EXER04MOVEZEROES_H

#endif //ED1_ALGORITHMS_EXERCISES_CPP_EXER04MOVEZEROES_H

#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int i;
    int vetor[n];
    for(i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }

    int cont=0;
    for(i=0; i<n; i++){
        if(vetor[i]!=0){
            vetor[cont] = vetor[i];
            cont++;
        }
    }

    while(cont<n){
        vetor[cont] = 0;
        cont++;
    }

    printf("Resultado:\n");
    for(i=0; i<n; i++){
        printf("%d ", vetor[i]);
    }

}


/*
Questao 4. Mover Zeros
Dado um vetor de inteiros nums, mova todos os valores 0 para o final dele, mantendo a ordem relativa
dos elementos nao nulos. O procedimento deve ser feito in-place sem criar uma copia do vetor.

Entrada
A primeira linha contem um inteiro N (1 . N . 104). A segunda linha contem N inteiros.

Saida
Imprima o vetor resultante com os zeros deslocados para o final.

Exemplo de Entrada		Exemplo de Saida
5						1 3 12 0 0
0 1 0 3 12
-------------------------------------
1						0
0

Explicacao
. Exemplo 1: Os numeros nao nulos sao 1, 3 e 12. Mantendo essa sequencia e empurrando os
dois zeros para o final, o resultado fica 1 3 12 0 0.
. Exemplo 2: O vetor possui apenas o elemento 0, logo ele proprio continua sendo 0.
*/