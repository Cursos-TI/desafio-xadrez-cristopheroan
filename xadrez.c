#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
 int torre = 5, bispo = 5, rainha = 8;
 int t = 1, r = 1;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
for (int b = 1; b <= bispo; b++) {
    printf("Bispo Mover %d: Cima, Direita\n", b);
}
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
do {
    printf("Torre Mover %d: Direita\n", t);
    t++;
} while(t <= torre);
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
while(r <= rainha) {
    printf("Rainha Mover %d: Esquerda\n", r);
    r++;
}
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n");

    int Cavalo = 3;//varialvel representando a peça + o valor dela.
    int c = 3;//numero de movimentos totais
    
    //loops aninhados utilizando "while" e o "for" para representar o movimento em "L" do cavalo.
    while (c <= Cavalo)//Loop em "while" representando 1 movimento a esquerda.
    {
        for (int a = 1; a <= 2; a++)//Loop em "for" representando dois movimentos para baixo.
        {
            printf("Cavalo move %d: Baixo\n", a);
        }
        printf("Cavalo move %d: Esquerda\n", c);
        c++;

    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
