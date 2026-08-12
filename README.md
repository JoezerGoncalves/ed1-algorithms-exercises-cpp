# Estrutura de Dados I - Exercícios de Fixação

Repositório contendo as soluções em **C** para os exercícios propostos na disciplina **Estrutura de Dados I** 
(Instituto Federal do Triângulo Mineiro - Campus Patrocínio).

As implementações foram desenvolvidas no **Dev-C++** e organizadas na estrutura de projeto do **CLion**.

---

## 📂 Estrutura do Repositório
```text
├── src/
│   └── main/
│       └── cpp/
│           └── dev/
│               └── joezer/
│                   └── exercises/
│                       ├── list01_algorithms
│                       │   ├── questao01_two_sum.c
│                       │   ├── questao02_remover_duplicatas.c
│                       │   ├── questao03_inverter_string.c
│                       │   ├── questao04_mover_zeros.c
│                       │   ├── questao05_elemento_majoritario.c
│                       │   ├── questao06_mariana_conta.c
│                       │   └── questao07_datas_duvidosas.c
│                       ├── listExtra01_11_08_2026
│                       │   ├── Exer01SomaCumulativadeValor.c
│                       │   └── Exer02MelhorMomentoCompra.c
│                       └── list02_algorithms
│
├── CMakeLists.txt
└── README.md
```
---

## 📝 Exercícios Resolvidos

### 1. Soma de Dois Números (Two Sum)
- Entrada: vetor de inteiros e valor alvo.
- Saída: índices dos dois elementos cuja soma é igual ao alvo.
- Estratégia: uso de busca com hash map ou dupla iteração.

### 2. Remover Duplicatas de Vetor Ordenado
- Entrada: vetor ordenado.
- Saída: quantidade de elementos únicos e vetor sem duplicatas.
- Estratégia: varredura linear com ponteiro lento/rápido.

### 3. Inverter uma String
- Entrada: string de tamanho N.
- Saída: string invertida.
- Estratégia: troca de caracteres simétrica (in-place).

### 4. Mover Zeros
- Entrada: vetor de inteiros.
- Saída: vetor com zeros deslocados ao final.
- Estratégia: compactação dos não-nulos e preenchimento com zeros.

### 5. Elemento Majoritário
- Entrada: vetor de inteiros.
- Saída: elemento que aparece mais de N/2 vezes.
- Estratégia: algoritmo de Boyer-Moore Majority Vote.

### 6. Ana, Viva a Mariana!
- Entrada: número X.
- Saída: quantidade total de números cantados até a estrofe X.
- Estratégia: soma acumulada das contagens por estrofe.

### 7. Datas Duvidosas
- Entrada: dois inteiros D e M.
- Saída: "DATA INCERTA" ou "DATA SEGURA".
- Estratégia: validação dupla (DD/MM e MM/DD).

---

## 🚀 Como Executar

1. Clone o repositório:
   ```bash
   git clone https://github.com/JoezerGoncalves/ed1-algorithms-exercises-cpp
   cd ed1-algorithms-exercises-cpp



