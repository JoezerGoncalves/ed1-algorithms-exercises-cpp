//
// Created by JoézerGonçalvesPerei on 11/08/2026.
//

#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER02REMOVEDUPLICATES_H
#define ED1_ALGORITHMS_EXERCISES_CPP_EXER02REMOVEDUPLICATES_H

#endif //ED1_ALGORITHMS_EXERCISES_CPP_EXER02REMOVEDUPLICATES_H

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int nums[n];
    int i;
    for(i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int k = 1;
    int resul[k];
    resul[0] = nums[0];
    int contagem = 1;
    int j=1;

    for(i=0; i<n; i++){
        if(resul[i] < nums[j]){
            k++;
            contagem++;
            resul[i] = nums[j];
            j++;
        }
    }

    printf("\nsolucao:\n%d\n", contagem);

    for(j=0; j<k; j++){
        printf("%d ", resul[j]);
    }

}


/*
Questao 2. Remover Duplicatas de Vetor Ordenado
Dado um vetor de inteiros nums ordenado de forma nao decrescente, remova as duplicatas in-place
de modo que cada elemento unico apareca apenas uma vez. A ordem relativa dos elementos deve ser
mantida.

Entrada
A primeira linha contem um inteiro N (1 . N . 3E104). A segunda linha contem N inteiros ordenados.

Saida
Imprima a quantidade k de elementos unicos, seguida por esses k elementos em uma nova linha.

Exemplo de Entrada 				Exemplo de Saida
3								2
1 1 2							1 2
_________________________________________________
10								5
0 0 1 1 1 2 2 3 3 4				0 1 2 3 4

Explicacao
. Exemplo 1: O vetor original tem 3 elementos. Os valores unicos sao 1 e 2. A quantidade de
unicos e k = 2, e a lista sem duplicatas e 1 2.
. Exemplo 2: O vetor tem 10 elementos. Ao remover os repetidos, restam apenas 5 elementos
unicos (k = 5): 0 1 2 3 4.
*/