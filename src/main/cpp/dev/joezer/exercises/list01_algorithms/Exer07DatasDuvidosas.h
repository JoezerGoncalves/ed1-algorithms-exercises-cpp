//
// Created by JoézerGonçalvesPerei on 11/08/2026.
//

#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER07DATASDUVIDOSAS_H
#define ED1_ALGORITHMS_EXERCISES_CPP_EXER07DATASDUVIDOSAS_H

#endif //ED1_ALGORITHMS_EXERCISES_CPP_EXER07DATASDUVIDOSAS_H

#include <stdio.h>

int main(){

    int dia, mes;
    scanf("%d %d", &dia, &mes);

    if(dia>31 || mes>12){
        printf("Data invalida digite outra: ");
        scanf("%d %d", &dia, &mes);
    }


    if(dia>12 && mes<=12 || dia == mes){
        printf("DATA SEGURA");
    }else{
        printf("DATA INSEGURA");
    }

}

/*
Questao 7. Datas Duvidosas

Um sistema espera datas no formato Dia/Mes (DD/MM), mas usuarios estrangeiros preenchem no
formato Mes/Dia (MM/DD). O sistema deve identificar quando a entrada gera duvida (ex: 1/6 pode
ser 1 de junho ou 6 de janeiro). Datas como 28/2 (nao existe mes 28) ou 9/9 sao seguras.

Entrada
Dois inteiros D e M (1 . D . 28 e 1 . M . 12).

Saida
Imprima DATA INCERTA se houver dupla interpretacao valida e distinta; caso contrario, DATA SEGURA.

Exemplo de Entrada 		Exemplo de Saida
28 2 					DATA SEGURA
-----------------------------------------
1 6 					DATA INCERTA

Explicacao
. Exemplo 1 (28 2): No formato DD/MM significa 28 de Fevereiro. Se invertido para MM/DD,
teriamos o "mes 28", que nao existe. Como so ha uma interpretacao valida, e uma DATA SEGURA.
. Exemplo 2 (1 6): Pode ser lido como 1 de Junho (DD/MM) ou 6 de Janeiro (MM/DD). Como
gera duas datas validas e distintas, e uma DATA INCERTA.
*/
