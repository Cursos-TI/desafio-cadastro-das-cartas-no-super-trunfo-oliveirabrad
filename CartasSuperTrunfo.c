#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char nome[50]; 
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int turistico;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Nome da cidade:\n");
    scanf("%s", &nome);
    printf("Código (UF+1~4):\n");
    scanf("%s", &codigo);
    printf("População:\n");
    scanf("%d", &populacao);
    printf("Área em km²:\n");
    scanf("%f", &area);
    printf("PIB:\n");
    scanf("%f", &pib);
    printf("Quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &turistico);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Nome da cidade: %s\n", nome);
    printf("Código da cidade: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área (km²): %f\n", area);
    prinft("PIB: %f\n", pib);
    printf("Pontos turísticos: %d\n", turistico);

    return 0;
}
