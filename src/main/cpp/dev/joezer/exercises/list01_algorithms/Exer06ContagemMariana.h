//
// Created by JoézerGonçalvesPerei on 11/08/2026.
//

#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER06CONTAGEMMARIANA_H
#define ED1_ALGORITHMS_EXERCISES_CPP_EXER06CONTAGEMMARIANA_H

#endif //ED1_ALGORITHMS_EXERCISES_CPP_EXER06CONTAGEMMARIANA_H

#include <stdio.h>

int main(){

    int ent;
    scanf("%d", &ent);

    int vetor[ent];
    vetor[0] = 3;
    int i;
    for(i=1; i<ent; i++){
        vetor[i] = vetor[i-1] + 1;
    }

    int soma = 0;
    for(i=0; i<ent; i++){
        soma = soma + vetor[i];
    }

    printf("Resultado: %d", soma);

}

/*
Questao 6. Ana, Viva a Mariana!
Mariana Conta 1 e uma musica frequentemente utilizada no aprendizado infantil de contagem. A
cancao e generalizada para Mariana Conta X (onde X e um numero natural):
Mariana conta 1: e 1, e Ana. Viva a Mariana!
Mariana conta 2: e 1, e 2, e Ana. Viva a Mariana!
...
Mariana conta X: e 1, e 2, ..., e X, e Ana. Viva a Mariana!
Determine quantos numeros no total aparecem na cancao ate a estrofe X.

Entrada
Um numero inteiro X (1 . X . 1000).

Saida
Um unico inteiro representando a quantidade total de numeros cantados.
Exemplo de Entrada 		Exemplo de Saida
2 						7
-----------------------------------------
5 						25

Explicacao
. Exemplo 1 (X = 2):
. Estrofe 1: gMariana conta 1: e 1, e Ana...h ¨ 2 numeros.
. Estrofe 2: gMariana conta 2: e 1, e 2, e Ana...h ¨ 3 numeros.
. Total de numeros citados: 2 + 3 + 2 = 7 (incluindo as contagens do titulo da estrofe e a
enumeracao).
. Exemplo 2 (X = 5): Somando os numeros contados do X = 1 ate X = 5, o total acumulado
resulta em 25 numeros falados.

minha linha de raciocinio:
estrofe     quantidade de numeros   soma com anterior
1           3                       3
2           4                       7
3           5                       12
4           6                       18
5           7                       25
sempre qua aumenta uma estrofe aumenta em 1 a quantidade de numeros,
isso começando com 3 numeros na primeira estrofe

criei um vetor para ir armazenando estes numeros e depois fiz a soma dos numeros desse vetor.

*/
