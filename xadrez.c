#include <stdio.h>
/*
void moverBispo(int vertical, int horizontal){
    if (vertical == 0 && horizontal == 0) return;
    printf("Diagonal Cima-Direita\n");
    moverBispo(vertical -1, horizontal -1);
}
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   / // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
 int torre = 5, bispoVertical = 3, bispoHorizontal = 3, rainha = 8;
 int t = 1, r = 1;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
for (int v = 1; v <= bispoVertical; v++) {
   for(int h = 0; h <= bispoHorizontal; h++ )
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
 
 return(0);
}*/

int numCasasTorre = 3; numCasasBispo = 3; numCasasRainha = 2;

void moverBispoDiagonal(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;
    printf("Diagonal Cima-Direita\n");
    moverBispoDiagonal(vertical -1, horizontal -1);

}

void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas -1);

}

void moverTorreDireita(int casas) {
    if (casas == 0) return;
     printf("Direita\n");
     moverTorreDireita(casas -1);
}

void moverRainhaCima(int casas) {
    if (casas == 0) return;
      printf("Cima\n");
      moverRainhaCima(casas -1);
}

void moverRainhaDireita(int casas) {
    if (casas == 0) return;
      printf("Direita\n");
      moverRainhaDireita(casas -1);
}

void moverRainhaDiagonal(int casas) {
    if (casas == 0) return;
      printf("Diagonal Cima-Direita\n");
      moverRainhaDiagonal(casas -1);
}

void moverCavaloL(int movimentos) {
    int feitos = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++){
            if(i !=2 || j !=1) continue;
                printf("Cavalo: 2 para Cima, 1 para Direita\n", feitos++);
                
                if (feitos >= movimentos) break;
        }
    }
}

/*int limiteVerticalCavalo = 3; limiteHorizontalCavalo = 3; 
int numCasasTorre = 3; numCasasBispo = 3; numCasasRainha = 2;
*/
int main() {
    printf("Movimento do Bispo(Recursivo):\n");
    moverBispoDiagonal(numCasasBispo, numCasasBispo);
    printf("\n");

    printf("Movimento do Bispo(Loops Aninhados):\n");
    for(int v = 1; v <= numCasasBispo; v++){
        for(int h = 1; h <= numCasasBispo; h++){
            if (v == h){
            printf("Bispo mover: Diagonal Cima-Direita[%d, %d]\n", v, h);
            }
        }
    }
    printf("\n");

    printf("Movimento Da Torre:\n");
    moverTorreCima(numCasasTorre);
    moverTorreDireita(numCasasTorre);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainhaCima(numCasasRainha);
    moverRainhaDireita(numCasasRainha);
    moverRainhaDiagonal(numCasasRainha);

    printf("Movimento do Cavalo:\n");
    moverCavaloL(3);
    printf("\n");
    
    return(0);
}