#include <stdio.h>


int main() {
   
  // Declaração de variavel Primeira carta 
    char Estado1;
    char Codigo1[2];
    char Cidade1[50];
    float População1;
    float Area1;
    float PIB1;
    int Pontoturistico1;

    // Leitura da carta 1
    printf("Digite os dados da carta1\n");

    printf("Estado1(Uma Letra de A a H)\n");
    scanf("%c", &Estado1);

    printf("Digite o Codigo1(EX: A1, H1)\n");
    scanf("%s", &Codigo1);

    printf("Digite a Cidade1\n"); 
    scanf("%s", &Cidade1);

    printf("Didite a População1\n");
    scanf("%f", &População1);

    printf("Digite a Area1\n");
    scanf("%f", &Area1);

    printf("Digite o PIB1 em milhões de reais\n");
    scanf("%f", &PIB1);

    printf("Digite Pontos turisticos1\n");
    scanf("%d", &Pontoturistico1);

    // Exibição de dados
    printf("\nDados da Carta1\n");

    printf("Estado1: %c\n", Estado1);
    printf("Codido1: %s\n", Codigo1);
    printf("Cidaade1: %s\n", Cidade1);
    printf("População1: %f\n", População1);
    printf("Area1: %f\n", Area1);
    printf("PIB1: %f\n", PIB1);
    printf("Pontoturistico1: %d\n", Pontoturistico1);
    return 0;
}
