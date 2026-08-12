//
// Created by JoézerGonçalvesPerei on 12/08/2026.
//

#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER01MELHORMOMENTOCOMPRAVENDA_H
#define ED1_ALGORITHMS_EXERCISES_CPP_EXER01MELHORMOMENTOCOMPRAVENDA_H

#endif //ED1_ALGORITHMS_EXERCISES_CPP_EXER01MELHORMOMENTOCOMPRAVENDA_H

#include <stdio.h>

int main(){

    int ent;
    scanf("%d", &ent);

    int price[ent];
    int i;
    for(i=0; i<ent; i++){
        scanf("%d", &price[i]);
    }

    int lucro=0;
    int j;
    for(i=0; i<ent; i++){
        for (j=i+1; j<ent; j++){
            if(price[j]-price[i]>lucro){
                lucro = price[j]-price[i];
            }
        }
    }

    printf("Lucro %d ", lucro);

}