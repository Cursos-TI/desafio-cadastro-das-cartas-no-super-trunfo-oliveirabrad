#include <stdio.h>


int main() {
    
    //VARIÁVEIS CARTA 1:
    char nome[50]; 
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int turistico;
    float densidade;
    float capita;
    float superpower;

    //VARIÁVEIS CARTA 2:
    char nome2[50]; 
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    float densidade2;
    float capita2;
    float superpower2;

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

    printf("VENCEDORA POR CATEGORIAS:\n");

    //COMPARAÇÕES:
    //População:
    if(populacao > populacao2){
        printf("POPULAÇÃO: %s\n", nome);
    }
    else if(populacao < populacao2){
        printf("POPULAÇÃO: %s\n", nome2);
    } 
    else{
        printf("POPULAÇÃO: Empate! \n");
    }

    //Área:
    if(area > area2){
        printf("ÁREA: %s\n", nome);
    }
    else if(area < area2){
        printf("ÁREA: %s\n", nome2);
    } 
    else{
        printf("ÁREA: Empate! \n");
    }

    //PIB:
    if(pib > pib2){
        printf("PIB: %s\n", nome);
    }
    else if(pib < pib2){
        printf("PIB: %s\n", nome2);
    } 
    else{
        printf("PIB: Empate! \n");
    }

    //Pontos Turísticos:
    if(turistico > turistico2){
        printf("PONTOS TURÍSTICOS: %s\n", nome);
    }
    else if(turistico < turistico2){
        printf("PONTOS TURÍSTICOS: %s\n", nome2);
    } 
    else{
        printf("PONTOS TURÍSTICOS: Empate! \n");
    }

    //Densidade Populacional:
    if(densidade > densidade2){
        printf("DENSIDADE POPULACIONAL: %s\n", nome2);
    }
    else if(densidade < densidade2){
        printf("DENSIDADE POPULACIONAL: %s\n", nome);
    } 
    else{
        printf("DENSIDADE POPULACIONAL: Empate! \n");
    }

    //PIB per capita:
    if(capita > capita2){
        printf("PIB PER CAPITA: %s\n", nome);
    }
    else if(capita < capita2){
        printf("PIB PER CAPITA: %s\n", nome2);
    } 
    else{
        printf("PIB PER CAPITA: Empate! \n");
    }

    //Super Poder:
    if(superpower > superpower2){
        printf("SUPER PODER: %s\n", nome);
    }
    else if(superpower < superpower2){
        printf("SUPER PODER: %s\n", nome2);
    } 
    else{
        printf("SUPER PODER: Empate! \n");
    }

    return 0;
}