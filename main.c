// Inclui a biblioteca padrão de entrada e saída.
#include <stdio.h>
// Inclui a biblioteca padrão para funções utilitárias.
#include <stdlib.h>

// Função principal do programa.
void main()
{
    // Declara uma variável para armazenar a quantidade atual de estoque.
    int quantidadeAtual;
    // Declara uma variável para armazenar a quantidade máxima de estoque.
    int quantidadeMaxima;
    // Declara uma variável para armazenar a quantidade mínima de estoque.
    int quantidadeMinima;
    // Declara uma variável para armazenar a quantidade média de estoque.
    float quantidadeMedia;

    // Solicita ao usuário que digite a quantidade atual de estoque.
    printf("Digite a quantidade atual de estoque: ");
    // Lê a quantidade atual e armazena na variável 'quantidadeAtual'.
    scanf("%d", &quantidadeAtual);

    // Solicita ao usuário que digite a quantidade máxima de estoque.
    printf("Digite a quantidade maxima de estoque: ");
    // Lê a quantidade máxima e armazena na variável 'quantidadeMaxima'.
    scanf("%d", &quantidadeMaxima);

    // Solicita ao usuário que digite a quantidade mínima de estoque.
    printf("Digite a quantidade minima de estoque: ");
    // Lê a quantidade mínima e armazena na variável 'quantidadeMinima'.
    scanf("%d", &quantidadeMinima);

    // Calcula a quantidade média de estoque.
    quantidadeMedia = (quantidadeMaxima + quantidadeMinima) / 2;

    // Verifica se a quantidade atual é maior ou igual à quantidade média.
    if (quantidadeAtual >= quantidadeMedia)
    {
        // Se a quantidade atual for maior ou igual à média, informa que não é necessário efetuar compra.
        printf("Não efetuar compra");
    }
    else
    {
        // Caso contrário, informa que é necessário efetuar compra.
        printf("Efetuar compra");
    }
    // Retorna "0" para indicar que o programa terminou com sucesso.
    return 0;
}
