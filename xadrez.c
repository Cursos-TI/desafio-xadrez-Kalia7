#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Número de casas para cada peça se mover
const int casasTorre = 5;
const int casasBispo = 5;
const int casasRainha = 8;

int main() {
    
    // TORRE - usando for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++)
    {
        printf("Direita\n"); // Exemplo: torre se movendo para casas a sua direita
    }

    // BISPO - usando while
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casasBispo)
    {
        printf("Cima Direita\n"); // Exemplo: bispo se movendo na diagonal superior direita
        i++;
    }

    // RAINHA - usando do-while
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do
    {
        printf("Esquerda\n"); // Exemplo: rainha se movendo para a esquerda
        j++;
    } while (j < casasRainha);

return 0;
}
// O código executa os movimentos da torre, bispo e rainha nessa ordem. E a quantidade de casas que cada um deve se mover é definida por uma constante.
// O loop for inicializa uma váriavel e repete o código enquanto essa váriavel for menor que o valor da constante casasTorre, assim a torre andará 5 casas a sua direita.
// O while verifica se a expressão i < casasBispo é verdadeira, se for, ele imprime o valor da função printf e incrementa a variavel, e repete até que a expressão se torne falsa. 
// Já o do whille, permite que o movimento seja feito ao menos uma vez, mesmo que a expressão seja falsa, e incrementa a variavel, e realiza a repetição até que essa expressão se torne falsa.


// Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.