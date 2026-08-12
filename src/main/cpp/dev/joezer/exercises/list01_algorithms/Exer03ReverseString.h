//
// Created by JoézerGonçalvesPerei on 11/08/2026.
//

#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER03REVERSESTRING_H
#define ED1_ALGORITHMS_EXERCISES_CPP_EXER03REVERSESTRING_H

#endif //ED1_ALGORITHMS_EXERCISES_CPP_EXER03REVERSESTRING_H

#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    char ent[N+1];
    scanf("%s", ent);

    int i;
    for(i=N-1; i>=0; i--){
        printf("%c", ent[i]);
    }

}


/*
Questao 3. Inverter uma String

Escreva um programa que receba uma cadeia de caracteres (string) de tamanho N e a inverta in-place
(modificando o proprio vetor/string de entrada).

Entrada
A primeira linha contem um inteiro N (1 . N . 105). A segunda linha contem uma string de N
caracteres (sem espacos).

Saida
Imprima a string invertida.

Exemplo de Entrada	Exemplo de Saida
5					olleh
hello
_____________________________________
6					hannaH
Hannah

Explicacao
. Exemplo 1: Lendo a palavra "hello"de tras para frente, obtemos "olleh".
. Exemplo 2: Lendo "Hannah"de tras para frente, preservando as maiusculas e minusculas,
obtemos "hannaH".
*/