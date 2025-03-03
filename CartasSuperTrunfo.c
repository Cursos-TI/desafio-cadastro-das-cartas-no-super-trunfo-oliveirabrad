#include <stdio.h>

int main() {

    int menu, menu2, pontosc1, pontosc2;

    pontosc1 = 0;
    pontosc2 = 0;
    
    //VARIÁVEIS CARTA 1:
    char nome[50], codigo[4]; 
    int populacao, turistico;
    float area, pib, densidade, capita, superpower;

    //VARIÁVEIS CARTA 2:
    char nome2[50], codigo2[4];
    int populacao2, turistico2;
    float area2, pib2, densidade2, capita2, superpower2;
   
    //DADOS CARTA 1:
    printf("Nome da cidade:\n");
    scanf("%s", &nome);
    printf("Código (UF+1~4):\n");
    scanf("%s", &codigo);
    printf("População:\n");
    scanf("%d", &populacao);
    printf("Área:\n");
    scanf("%f", &area);
    printf("PIB:\n");
    scanf("%f", &pib);
    printf("Quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &turistico);
    printf("\n");
    
    densidade = populacao / area;
    capita = pib / populacao;
    superpower = (float)populacao + area + pib + (float)turistico + capita - densidade;

    //DADOS CARTA 2:
    printf("Nome da cidade:\n");
    scanf("%s", &nome2);
    printf("Código (UF+1~4):\n");
    scanf("%s", &codigo2);
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Área:\n");
    scanf("%f", &area2);
    printf("PIB:\n");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &turistico2);
    printf("\n");

    densidade2 = populacao2 / area2;
    capita2 = pib2 / populacao2;
    superpower2 = (float)populacao2 + area2 + pib2 + (float)turistico2 + capita2 - densidade2;

    //PRINTF CARTA 1:
    printf("Nome da cidade: %s\n", nome);
    printf("Código da cidade: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área (km²): %d\n", (int)area);
    printf("PIB: %d\n", (int)pib);
    printf("Pontos turísticos: %d\n", turistico);
    printf("Densidade populacional: %d\n", (int)densidade);
    printf("PIB per capita: %d\n", (int)capita);
    printf("Super Poder: %d\n", (int)superpower);

    //PRINTF CARTA2:
    printf("\nNome da cidade: %s\n", nome2);
    printf("Código da cidade: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %d\n", (int)area2);
    printf("PIB: %d\n", (int)pib2);
    printf("Pontos turísticos: %d\n", turistico2);
    printf("Densidade populacional: %d\n", (int)densidade2);
    printf("PIB per capita: %d\n", (int)capita2);
    printf("Super Poder: %d\n", (int)superpower2);
    printf("\n");
    printf("\n");

    //COMPARAÇÕES:

    //Menu para seleção
    printf("Escolha o atributo que será comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &menu);

    switch (menu)
    {
    //População:
    case 1:
    if(populacao > populacao2){
        printf("POPULAÇÃO: %s: %d x %s: %d - Vencedor: %s\n", nome, populacao, nome2, populacao2, nome);
        pontosc1++;
    }
    else if(populacao < populacao2){
        printf("POPULAÇÃO: %s: %d x %s: %d - Vencedor: %s\n", nome, populacao, nome2, populacao2, nome2);
        pontosc2++;
    } 
    else{
        printf("POPULAÇÃO:  %s: %d x %s: %d - Empate! \n", nome, populacao, nome2, populacao2);
    }
    break;

    //Área:
    case 2:
    if(area > area2){
        printf("ÁREA: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, area, nome2, area2, nome);
        pontosc1++;
    }
    else if(area < area2){
        printf("ÁREA: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, area, nome2, area2, nome2);
        pontosc2++;
    } 
    else{
        printf("ÁREA: %s: %.2f x %s: %.2f - Empate! \n", nome, area, nome2, area2);
    }
    break;

    //PIB:
    case 3:
    if(pib > pib2){
        printf("PIB: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, pib, nome2, pib2, nome);
        pontosc1++;
    }
    else if(pib < pib2){
        printf("PIB: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, pib, nome2, pib2, nome2);
        pontosc2++;
    } 
    else{
        printf("PIB: %s: %.2f x %s: %.2f - Empate! \n", nome, pib, nome2, pib2);
    }
    break;

    //Pontos Turísticos:
    case 4:
    if(turistico > turistico2){
        printf("PONTOS TURÍSTICOS: %s: %d x %s: %d - Vencedor: %s\n", nome, turistico, nome2, turistico2, nome);
        pontosc1++;
    }
    else if(turistico < turistico2){
        printf("PONTOS TURÍSTICOS: %s: %d x %s: %d - Vencedor: %s\n", nome, turistico, nome2, turistico2, nome2);
        pontosc2++;

    } 
    else{
        printf("PONTOS TURÍSTICOS: %s: %d x %s: %d - Empate! \n", nome, turistico, nome2, turistico2);
    }
    break;

    //Densidade Populacional:
    case 5:
    if(densidade > densidade2){
        printf("DENSIDADE POPULACIONAL: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, densidade, nome2, densidade2, nome);
        pontosc1++;

    }
    else if(densidade < densidade2){
        printf("DENSIDADE POPULACIONAL: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, densidade, nome2, densidade2, nome2);
        pontosc2++;
    } 
    else{
        printf("DENSIDADE POPULACIONAL: %s: %.2f x %s: %.2f - Empate! \n", nome, densidade, nome2, densidade2);
    }
    break;

    //PIB per capita:
    case 6:
    if(capita > capita2){
        printf("PIB PER CAPITA: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, capita, nome2, capita2, nome);
        pontosc1++;

    }
    else if(capita < capita2){
        printf("PIB PER CAPITA: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, capita, nome2, capita2, nome2);
        pontosc2++;
    } 
    else{
        printf("PIB PER CAPITA: %s: %.2f x %s: %.2f - Empate! \n", nome, capita, nome2, capita2);
    }
    break;

    //Super Poder:
    case 7:
    if(superpower > superpower2){
        printf("SUPER PODER: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, superpower, nome2, superpower2, nome);
        pontosc1++;
    }
    else if(superpower < superpower2){
        printf("SUPER PODER: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, superpower, nome2, superpower2, nome);
        pontosc2++;
    } 
    else{
        printf("SUPER PODER: %s: %.2f x %s: %.2f - Empate! \n", nome, superpower, nome2, superpower2);
    }
    break;
    }
    printf("\n");
    
    //Menu para seleção
    printf("Escolha o atributo que será comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &menu2);

    if(menu == menu2){
        printf("Você escolheu o mesmo atributo para comparação! Escolha um atributo diferente.\n");

    } else {

    switch (menu2)
    {
    //População:
    case 1:
    if(populacao > populacao2){
        printf("POPULAÇÃO: %s: %d x %s: %d - Vencedor: %s\n", nome, populacao, nome2, populacao2, nome);
        pontosc1++;
    }
    else if(populacao < populacao2){
        printf("POPULAÇÃO: %s: %d x %s: %d - Vencedor: %s\n", nome, populacao, nome2, populacao2, nome2);
        pontosc2++;
    } 
    else{
        printf("POPULAÇÃO:  %s: %d x %s: %d - Empate! \n", nome, populacao, nome2, populacao2);
    }
    break;

    //Área:
    case 2:
    if(area > area2){
        printf("ÁREA: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, area, nome2, area2, nome);
        pontosc1++;
    }
    else if(area < area2){
        printf("ÁREA: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, area, nome2, area2, nome2);
        pontosc2++;
    } 
    else{
        printf("ÁREA: %s: %.2f x %s: %.2f - Empate! \n", nome, area, nome2, area2);
    }
    break;

    //PIB:
    case 3:
    if(pib > pib2){
        printf("PIB: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, pib, nome2, pib2, nome);
        pontosc1++;
    }
    else if(pib < pib2){
        printf("PIB: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, pib, nome2, pib2, nome2);
        pontosc2++;
    } 
    else{
        printf("PIB: %s: %.2f x %s: %.2f - Empate! \n", nome, pib, nome2, pib2);
    }
    break;

    //Pontos Turísticos:
    case 4:
    if(turistico > turistico2){
        printf("PONTOS TURÍSTICOS: %s: %d x %s: %d - Vencedor: %s\n", nome, turistico, nome2, turistico2, nome);
        pontosc1++;
    }
    else if(turistico < turistico2){
        printf("PONTOS TURÍSTICOS: %s: %d x %s: %d - Vencedor: %s\n", nome, turistico, nome2, turistico2, nome2);
        pontosc2++;
    } 
    else{
        printf("PONTOS TURÍSTICOS: %s: %d x %s: %d - Empate! \n", nome, turistico, nome2, turistico2);
    }
    break;

    //Densidade Populacional:
    case 5:
    if(densidade > densidade2){
        printf("DENSIDADE POPULACIONAL: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, densidade, nome2, densidade2, nome);
        pontosc1++;
    }
    else if(densidade < densidade2){
        printf("DENSIDADE POPULACIONAL: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, densidade, nome2, densidade2, nome2);
        pontosc2++;
    } 
    else{
        printf("DENSIDADE POPULACIONAL: %s: %.2f x %s: %.2f - Empate! \n", nome, densidade, nome2, densidade2);
    }
    break;

    //PIB per capita:
    case 6:
    if(capita > capita2){
        printf("PIB PER CAPITA: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, capita, nome2, capita2, nome);
        pontosc1++;
    }
    else if(capita < capita2){
        printf("PIB PER CAPITA: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, capita, nome2, capita2, nome2);
        pontosc2++;
    } 
    else{
        printf("PIB PER CAPITA: %s: %.2f x %s: %.2f - Empate! \n", nome, capita, nome2, capita2);
    }
    break;

    //Super Poder:
    case 7:
    if(superpower > superpower2){
        printf("SUPER PODER: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, superpower, nome2, superpower2, nome);
        pontosc1++;
    }
    else if(superpower < superpower2){
        printf("SUPER PODER: %s: %.2f x %s: %.2f - Vencedor: %s\n", nome, superpower, nome2, superpower2, nome);
        pontosc2++;
    } 
    else{
        printf("SUPER PODER: %s: %.2f x %s: %.2f - Empate! \n", nome, superpower, nome2, superpower2);
    }
    break;
    }
    }
    printf("\n");
    if(pontosc1 > pontosc2){
        printf("%s venceu!\n", nome);
    } else if(pontosc1 < pontosc2){
        printf("%s venceu!\n", nome2);
    } else{
        printf("Houve um empate entre %s e %s!\n", nome, nome2);
    }


    return 0;
}