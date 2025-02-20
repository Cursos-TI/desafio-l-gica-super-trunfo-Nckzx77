#include <stdio.h>

int main (){

    //variaveis
    char estado, nome_cidade[40], codigo_carta[30];
    int populacao, pontos_turisticos = 0;
    float area, pib, pib_per, dens_pop, superpoder;
    int opcao, opcao1;

    //menu interativo
    printf("*** JOGO SUPER TRUNFO ***\n");
    printf("\n1. Adicionar cartas\n");
    printf("2. Comparar contra suas cartas\n");
    printf("\nEscolha sua opção: \n");
    scanf("%d", &opcao);


    //COLETA DE INFORMAÇÕES PARA FAZER AS CARTAS
    switch (opcao)
    {
    case 1:
    //recebimento de dados
    printf("PRIMEIRA CARTA\n");
    printf("\nEstado (de A à H):\n");
    scanf(" %c", &estado);
    printf("Codígo da cidade: \n");
    scanf("%s", &codigo_carta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade);
    printf("Digite sua população: \n");
    scanf("%d", &populacao);
    printf("Digite sua área: \n");
    scanf("%f", &area);
    printf("Digite seu PIB: \n");
    scanf("%f", &pib);
    printf("Digite seus pontos turistícos: \n");
    scanf("%d", &pontos_turisticos);

    //OPERACÕES
    //populacao base foi feita para equilibrar o superpoder ja que definiria muito os seus pontos por ser milhões.
    pib_per = (float) populacao / pib;
    dens_pop = (float) populacao / area;
    int populacao_base = populacao / 10000;
    superpoder = populacao_base + -dens_pop + pontos_turisticos + pib + pib_per + area;

    //SEGUNDA CARTA

    //variaveis2
    char estado1;
    char codigo_carta1[40], nome_cidade1[40];
    int populacao1, pontos_turisticos1;
    float area1, pib1, pib_per1, dens_pop1, superpoder1;

    //recebimento de dados2
    printf("\nSEGUNDA CARTA:\n");
    printf("\nEstado (de A à H):\n");
    scanf(" %c", &estado1);
    printf("Código da cidade: \n");
    scanf("%s", &codigo_carta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade1);
    printf("Digite sua população: \n");
    scanf("%d", &populacao1);
    printf("Digite sua área: \n");
    scanf("%f", &area1);
    printf("Digite seu PIB: \n");
    scanf("%f", &pib1);
    printf("Digite seus pontos turistícos: \n");
    scanf("%d", &pontos_turisticos1);

    //operaçoes
    //populacao base foi feita para equilibrar o superpoder ja que definiria muito os seus pontos por ser milhões.
    pib_per1 = (float) populacao1 / pib1;
    dens_pop1 = (float) populacao1 / area1;
    int populacao_base1 = populacao1 / 10000;
    superpoder1 = populacao_base1 + -dens_pop1 + pontos_turisticos1 + pib1 + pib_per1 + area1;

    //entrega de informações
    
    printf("\nCódigo da Primeira Carta: %s\n", codigo_carta);
    printf("Nome: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Densidadad Populacioanl: %.2f\n", dens_pop);
    printf("Área: %.2f em km²\n", area);
    printf("PIB: %.2f em bilhões de reais\n", pib);
    printf("PIB per Capita: %.2f\n", pib_per);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("\nO poder da sua cidade = %.0f\n", superpoder);
    
    printf("\nCódigo da Segunda Carta: %c%s\n", estado1);
    printf("Nome: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Densidadad Populacioanl: %.2f\n", dens_pop1);
    printf("Área: %.2f em km²\n", area1);
    printf("PIB: %.2f em bilhões de reais\n", pib1);
    printf("PIB per Capita: %.2f\n", pib_per1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("\nO poder da sua cidade = %.0f\n", superpoder1);

    printf("\nFINALIZADO\n");


    case 2:
        if (pontos_turisticos == 0 ){
            printf("Você não cadastou suas cartas.");
            return 0;
        } else {

        printf("\nEscolha qual comparação usar: \n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfican\n");
        printf("6. Superpoder\n");
        scanf("%d", &opcao1);

        switch (opcao1)
        {
        case 1:
            if (populacao > populacao1)
            {
                printf("\nO %s ganhou do %s\n", nome_cidade, nome_cidade1);
                printf("Atributo usado: Populacão \n");
                printf("Valores de %s: %d\n", nome_cidade, populacao);
                printf("Valores de %s: %d\n", nome_cidade1, populacao1);
            } else {
                printf("\nO %s ganhou do %s\n", nome_cidade1, nome_cidade);
                printf("Atributo usado: Populacão \n");
                printf("Valores de %s: %d\n", nome_cidade1, populacao1);
                printf("Valores de %s: %d\n", nome_cidade, populacao);
            }
            
            break;
        case 2:
        if (area > area1)
        {
            printf("\nO %s ganhou do %s\n", nome_cidade, nome_cidade1);
            printf("Atributo usado: Área \n");
            printf("Valores de %s: %d\n", nome_cidade, area);
            printf("Valores de %s: %d\n", nome_cidade1, area1);
        } else {
            printf("\nO %s ganhou do %s\n", nome_cidade1, nome_cidade);
            printf("Atributo usado: Área \n");
            printf("Valores de %s: %d\n", nome_cidade1, area1);
            printf("Valores de %s: %d\n", nome_cidade, area);
        }
            break;
        
        case 3:
        if (pib > pib1)
            {
                printf("\nO %s ganhou do %s\n", nome_cidade, nome_cidade1);
                printf("Atributo usado: PIB \n");
                printf("Valores de %s: %d\n", nome_cidade, pib);
                printf("Valores de %s: %d\n", nome_cidade1, pib1);
            } else {
                printf("\nO %s ganhou do %s\n", nome_cidade1, nome_cidade);
                printf("Atributo usado: PIB \n");
                printf("Valores de %s: %d\n", nome_cidade1, pib1);
                printf("Valores de %s: %d\n", nome_cidade, pib);
            }
            break;

        case 4:
        if (pontos_turisticos > pontos_turisticos1)
        {
            printf("\nO %s ganhou do %s\n", nome_cidade, nome_cidade1);
            printf("Atributo usado: Pontos Turísticos \n");
            printf("Valores de %s: %d\n", nome_cidade, pontos_turisticos);
            printf("Valores de %s: %d\n", nome_cidade1, pontos_turisticos1);
        } else {
            printf("\nO %s ganhou do %s\n", nome_cidade1, nome_cidade);
            printf("Atributo usado: Pontos Turísticos \n");
            printf("Valores de %s: %d\n", nome_cidade1, pontos_turisticos1);
            printf("Valores de %s: %d\n", nome_cidade, pontos_turisticos);
        }
            break;
        
        case 5:
        if (dens_pop > dens_pop1)
        {
            printf("\nO %s ganhou do %s\n", nome_cidade, nome_cidade1);
            printf("Atributo usado: Densidade Demográfica \n");
            printf("Valores de %s: %d\n", nome_cidade, dens_pop);
            printf("Valores de %s: %d\n", nome_cidade1, dens_pop1);
        } else {
            printf("\nO %s ganhou do %s\n", nome_cidade1, nome_cidade);
            printf("Atributo usado: Densidade Demográfica \n");
            printf("Valores de %s: %d\n", nome_cidade1, dens_pop1);
            printf("Valores de %s: %d\n", nome_cidade, dens_pop);
        }
            break;
        
        case 6:
        if (superpoder > superpoder1)
            {
                printf("\nO %s ganhou do %s\n", nome_cidade, nome_cidade1);
                printf("Atributo usado: Superpoder \n");
                printf("Valores de %s: %d\n", nome_cidade, superpoder);
                printf("Valores de %s: %d\n", nome_cidade1, superpoder1);
            } else {
                printf("\nO %s ganhou do %s\n", nome_cidade1, nome_cidade);
                printf("Atributo usado: Superpoder \n");
                printf("Valores de %s: %d\n", nome_cidade1, superpoder1);
                printf("Valores de %s: %d\n", nome_cidade, superpoder);
            }
            break;

        default:
            printf("Ocorreu um erro");
            break;
        }
    }
        
        break;
    default:
    printf("Ocorreu um erro");
        break;
    }

    return 0;

}