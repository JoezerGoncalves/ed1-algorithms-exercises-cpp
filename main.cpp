#include <iostream>
#include <sstream>

#include "src/main/cpp/dev/joezer/exercises/list01_algorithms/Exer01TwoSum.h"
#include "src/main/cpp/dev/joezer/exercises/list01_algorithms/Exer02RemoveDuplicates.h"
#include "src/main/cpp/dev/joezer/exercises/list01_algorithms/Exer03ReverseString.h"
#include "src/main/cpp/dev/joezer/exercises/list01_algorithms/Exer04MoveZeroes.h"
#include "src/main/cpp/dev/joezer/exercises/list01_algorithms/Exer05MajorityElement.h"
#include "src/main/cpp/dev/joezer/exercises/list01_algorithms/Exer06ContagemMariana.h"
#include "src/main/cpp/dev/joezer/exercises/list01_algorithms/Exer07DatasDuvidosas.h"

#include "src/main/cpp/dev/joezer/exercises/listExtra01_11_08_2026/Exer01SomaCumulativadeVetor.h"
#include "src/main/cpp/dev/joezer/exercises/listExtra01_11_08_2026/Exer02MelhorMomentoCompraVenda.h"
#include "src/main/cpp/dev/joezer/exercises/listExtra01_11_08_2026/Exer03RotacaoDeVetorADireita.h"
#include "src/main/cpp/dev/joezer/exercises/listExtra01_11_08_2026/Exer04ProdutoDeVetorExcetoOProprioElemento.h"


using namespace std;

void runExer01TwoSum1() {

    // Entrada do teste
    istringstream entrada("4 9 2 7 11 15");

    cin.rdbuf(entrada.rdbuf());

    // Executa o exercício
    exer01TwoSum1();
}

void runExer01TwoSum2() {

    int vetor1[] = {2, 7, 11, 15};
    exer01TwoSum2(4, 9, vetor1);

    int vetor2[] = {3, 2, 4};
    exer01TwoSum2(3, 6, vetor2);

    int vetor3[] = {3, 3};
    exer01TwoSum2(2, 6, vetor3);
}

int main() {

    //runExer01TwoSum1();
    runExer01TwoSum2();

    return 0;
}
