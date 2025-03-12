#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// Desenhando Cone
void desenharCone(int tabuleiro[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || (i == 1 && j >= 1 && j <= 3) || (i == 0 && j == 2)) {
                tabuleiro[i][j] = 1;
            } else {
                tabuleiro[i][j] = 0;
            }
        }
    }
}

// Exibir Tabuleiro
void exibirTabuleiro(int tabuleiro[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    int tabuleiroCone[5][5];

    // Inicializando o tabuleiro preenchendo com 0
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
        
    }

    // Adicionando navio na horizonrtal
    for (int i = 3; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[1][i + j] = 3;
        }
        break; 
    }

    // Adicionando navio na vertical
    for (int i = 2; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i + j][9] = 3;
        }
        break; 
    }  

    // Adicionando navio na diagonal principal
    for (int i = 6; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tabuleiro[i + j][i + j] = 3;
        }
        break; // para em 3 células
    }

    // Adicionando navio na diagonal secundária
    for (int i = 3; i < 10; i++) {
        for (int j = 0; j < 3; j++)
        {
            tabuleiro[i + j][9 - (i + j)] = 3;
        }
        break; // para em 3 células
    }
    

    printf("------------------------\n");
    printf("TABULEIRO BATALHA NAVAL \n");
    printf("------------------------\n");
    printf("    ");

    // Exibe valores do vetor Linha
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", linha[i]);
    }

    printf("\n"); // Quebra de linha
    
    // Exibe o tabuleiro
    for (int i = 0; i < 10; i++)
    {
        printf("%2d |", i + 1); // Exibe números das linhas

        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        
        printf("\n"); //Quebra de linha
    }

    printf("\n");
    printf("Habilidades Especiais \n");
    
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    desenharCone(tabuleiroCone);
    printf("Tabuleiro Cone:\n");
    exibirTabuleiro(tabuleiroCone);
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
