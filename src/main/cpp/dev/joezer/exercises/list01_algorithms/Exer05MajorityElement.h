//
// Created by JoézerGonçalvesPerei on 11/08/2026.
//

#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER05MAJORITYELEMENT_H
#define ED1_ALGORITHMS_EXERCISES_CPP_EXER05MAJORITYELEMENT_H

#endif //ED1_ALGORITHMS_EXERCISES_CPP_EXER05MAJORITYELEMENT_H

#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);

    int vetor[n];
    int i;
    for(i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }

    int majr = vetor[0];
    int cont = 1;
    for(i=1; i<n; i++){
        if(vetor[i] == majr){
            cont++;
        }else{
            cont--;
            if(cont == 0){
                majr = vetor[i];
                cont = 1;
            }
        }
    }

    printf("\nElemento majoritario: %d", majr);

}

/*
*Questão 5. Elemento Majoritário

Dado um vetor nums de tamanho N, encontre o elemento majoritário. O elemento majoritário é aquele
que aparece mais de .N/2. vezes no vetor. Você pode supor que o elemento majoritário sempre existe
no vetor.

Entrada
A primeira linha contém um inteiro N (1 = N = 5 · 104). A segunda linha contém N inteiros.

Saída
Imprima o valor do elemento majoritário.
Exemplo de Entrada			Exemplo de Saída
3							3
2 3 3
---------------------------------------------
7							2
2 2 1 1 1 2 2

Explicação
• Exemplo 1: N = 3, logo .3/2. = 1. O número 3 aparece 2 vezes, o que é maior que 1.
• Exemplo 2: N = 7, logo .7/2. = 3. O número 2 aparece 4 vezes, o que é maior que 3.
 */