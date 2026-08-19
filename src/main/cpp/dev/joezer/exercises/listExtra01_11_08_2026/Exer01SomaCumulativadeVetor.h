//
// Created by JoézerGonçalvesPerei on 12/08/2026.
//

#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER01SOMACUMULATIVADEVETOR_H
#define ED1_ALGORITHMS_EXERCISES_CPP_EXER01SOMACUMULATIVADEVETOR_H

#endif //ED1_ALGORITHMS_EXERCISES_CPP_EXER01SOMACUMULATIVADEVETOR_H

#include <stdio.h>

int main(){

    int ent;
    scanf("%d \n", &ent);

    int vetor[ent];
    int i;
    for(i=0; i<ent; i++){
        scanf("%d", &vetor[i]);
    }

    int soma=0;

    for(i=0; i<ent; i++){
        soma = soma + vetor[i];
        printf("%d ", soma);
    }

}


// using mamespace std;
// cin >> *variavel
// cout << *resultado
