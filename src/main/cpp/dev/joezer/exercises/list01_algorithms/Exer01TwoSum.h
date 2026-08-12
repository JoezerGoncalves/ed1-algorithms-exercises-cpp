//
// Created by JoézerGonçalvesPerei on 11/08/2026.
//

#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER01TWOSUM_H
#define ED1_ALGORITHMS_EXERCISES_CPP_EXER01TWOSUM_H

#endif //ED1_ALGORITHMS_EXERCISES_CPP_EXER01TWOSUM_H

/*
Questao 1. Soma de Dois Numeros (Two Sum)
Dado um vetor de numeros inteiros nums e um valor inteiro target, encontre e exiba os indices dos
dois numeros no vetor cuja soma seja exatamente igual ao valor target.

Voce pode assumir que cada entrada possui exatamente uma unica solucao e que nao e permitido
utilizar o mesmo elemento duas vezes.

Entrada
A primeira linha contem dois inteiros N (2 . N . 104) e T (.109 . T . 109), representando o
tamanho do vetor e o valor alvo (target). A segunda linha contem N inteiros separados por espaco.

Saida
Imprima uma unica linha contendo os dois indices (indexacao iniciada em 0) cujos valores somados
resultam em target.

Exemplo de Entrada		Exemplo de Saida
4 9						0 1
2 7 11 15
__________________________________________
3 6						1 2
3 2 4

*/
#include <stdio.h>

int main() {

    int n, target; //tamanho do vetor

    scanf("%d %d", &n, &target);

    int vetor[n];
    int i;

    for(i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }
    int j;

    for(i=0; i<n; i++){
        for(j = i+1; j<n; j++){
            if(vetor[i]+vetor[j] == target ){
                printf("%d %d", i, j);
                return 0;
            }

        }
    }


}
