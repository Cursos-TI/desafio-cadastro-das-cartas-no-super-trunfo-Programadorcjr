#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Carta 01
    
    char Codigo [2];
    char Cidade [50];
    int População;
    float Area;
    float PIB;
    int PTturistico;

    printf ("Codigo da cidade:\n");
    scanf ("%s" &Codigo:\n);

    printf("Cidade:\n");
    scanf("%s", &Cidade);

    printf("População:\n");
    scanf("%d", &População:\n);

    printf("Area:\n");
    scanf ("%f", &Area);

    printf("PIB:\n");
    scanf("%f", &PIB);

    printf("Poto Turistico:\n");
    scanf("%d", &PTturistico);

    printf ("codigo:%s - Cidade: %s codigo, cidade");
    printf ("População: %f Area: %f PIB: %f");
    printf ("Ponto turistico: %d");


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
