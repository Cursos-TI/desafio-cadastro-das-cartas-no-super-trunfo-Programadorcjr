#include <stdio.h>

int main (){
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


    // Declaração de variavel segunda carta 
    char Estado2;
    char Codigo2[2];
    char Cidade2[50];
    float População2;
    float Area2;
    float PIB2;
    int Pontoturistico2;

    // Leitura da carta 2
    printf("\nDigite os dados da carta2\n");

    printf("Estado2(Uma Letra de A a H)\n");
    scanf("%c", &Estado2);

    printf("Digite o Codigo2(EX: A1, H1)\n");
    scanf("%s", &Codigo2);

    printf("Digite a Cidade2\n"); 
    scanf("%s", &Cidade2);

    printf("Didite a População2\n");
    scanf("%f", &População2);

    printf("Digite a Area2\n");
    scanf("%f", &Area2);

    printf("Digite o PIB2 em milhões de reais\n");
    scanf("%f", &PIB2);

    printf("Digite Pontos turisticos2\n");
    scanf("%d", &Pontoturistico2);

    // Exibição de dados
    printf("\nDados da Carta2\n");

    printf("Estado2: %c\n", Estado2);
    printf("Codido2: %s\n", Codigo2);
    printf("Cidaade2: %s\n", Cidade2);
    printf("População2: %f\n", População2);
    printf("Area2: %f\n", Area2);
    printf("PIB2: %f\n", PIB2);
    printf("Pontoturistico2: %d\n", Pontoturistico2);




    return 0;

}