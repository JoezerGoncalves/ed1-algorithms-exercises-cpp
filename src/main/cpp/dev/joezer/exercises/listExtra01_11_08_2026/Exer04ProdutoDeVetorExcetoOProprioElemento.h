//
// Created by JoézerGonçalvesPerei on 15/08/2026.
//

#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER04PRODUTODEVETOREXCETOOPROPRIOELEMENTO_H
#define ED1_ALGORITHMS_EXERCISES_CPP_EXER04PRODUTODEVETOREXCETOOPROPRIOELEMENTO_H

#endif //ED1_ALGORITHMS_EXERCISES_CPP_EXER04PRODUTODEVETOREXCETOOPROPRIOELEMENTO_H

#include<stdio.h>

int main(){

    int ent;
    scanf("%d", &ent);
    int vetor[ent], vetorR[ent];

    int i, j;

    for(i=0; i<ent; i++){
        scanf("%d", &vetor[i]);
    }

    int mult = 1;

    for(i=0; i<ent; i++){
        for(j=0; j<ent; j++){
            if(i != j){
                mult = vetor[j]*mult;
            }
        }
        vetorR[i] = mult;
        mult = 1;
    }

    for(i=0; i<ent; i++){
        printf("%d ", vetorR[i]);
    }

}

/*
Exemplo de Entrada		Exemplo de Saida
4						24 12 8 6
1 2 3 4
-----------------------------------------
5						0 0 9 0 0
-1 1 0 -3 3
*/