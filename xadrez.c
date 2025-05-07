#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Mostra na tela que vai começar a movimentação do Bispo
printf("\n\nMovimentacao Bispo\n\n");

// Cria uma variável chamada movBispo e coloca o valor 5
int movBispo = 5;

// Faz um laço que repete enquanto movBispo for maior que 0
do
{
    // Mostra que o bispo está indo pra direita
    printf("Direita\n");

    // Mostra que o bispo está indo pra cima
    printf("Cima\n");

    // Tira 1 do valor de movBispo
    --movBispo;

} while (movBispo > 0); // Repete até que movBispo seja 0

// Mostra na tela que vai começar a movimentação da Torre
printf("\n\nMovimentacao Torre \n\n");

// Cria uma variável chamada movTorre com o valor 5
int movTorre = 5;

// Laço for que começa com o valor atual de movTorre e vai até ele ser 0
for (movTorre; movTorre > 0; movTorre--)
{
    // Mostra que a torre está indo pra direita
    printf("Direita\n");
}

// Mostra na tela que vai começar a movimentação da Rainha
printf("\n\nMovimentacao Rainha \n\n");

// Cria uma variável chamada movRainha com o valor 8
int movRainha = 8;

// Enquanto movRainha for maior que 0, repete o que está dentro
while (movRainha > 0)
{
    // Mostra que a rainha está indo pra esquerda
    printf("Esquerda\n");

    // Tira 1 do valor de movRainha
    --movRainha;
}

}