#include <stdio.h>
#include <stdbool.h>    
#include <stdlib.h>
#include <unistd.h> // Para 
#include <locale.h>
#include <string.h> // Para usar a funÃ§Ã£o strcpy

int main() {
    // setlocale(LC_NUMERIC, "Portuguese_Brazil"); // Configura o locale para portuguÃªs
    // setlocale(LC_ALL, ""); // Configura o locale para o padrÃ£o do sistema

    // InformaÃ§Ãµes para SÃ£o Paulo
    // char CodigoCartaSP[50] = "01";
    // char NomeCidadeSP[100] = "SÃ£o Paulo";
    float PopulacaoSP = 12300000;
    float AreaSP = 30000.0;
    float PIBSP = 699.28f; // Valor exemplo em bilhÃµes
    float PIBPerCapitaSP = PIBSP / PopulacaoSP * 1000000; // Calculando PIB per capita
    float NumerodePontosTuristicosSP = 15;

    // InformaÃ§Ãµes para Rio de Janeiro
    // char EstadoRJ[50] = "RJ";
    // char CodigoCartaRJ[50] = "02";
    // char NomeCidadeRJ[100] = "Rio de Janeiro";
    float PopulacaoRJ = 6748000;
    float AreaRJ = 12000.0;
    float PIBRJ = 400.0; // Valor exemplo em bilhÃµes
    float PIBPerCapitaRJ = PIBRJ / PopulacaoRJ * 1000000; // Calculando PIB per capita
    float NumerodePontosTuristicosRJ = 20;

    // Calculando densidade populacional para ambas as cidades
    
    float DensidadeSaoPaulo = (float)PopulacaoSP / AreaSP;
    float DensidadeRioDeJaneiro = (float)PopulacaoRJ / AreaRJ;

   
    int escolha;
    printf("Escolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. PIB per capita\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade populacional\n");
    printf("7. Sair\n");
    printf("Digite o Número correspondente ao atributo: ");
  

    scanf("%d", &escolha); 

    while (1) {
        switch (escolha) {
            case 1: // PopulaÃ§Ã£o
                if (PopulacaoSP > PopulacaoRJ) {
                    printf("São Paulo vence em população.\n");
                } else if (PopulacaoSP < PopulacaoRJ) {
                    printf("Rio de Janeiro vence em população.\n");
                } else {
                    printf("Ambas as cidades têm a mesma população.\n");
                }
                break;
            case 2: // Ãrea
                if (AreaSP > AreaRJ) {
                    printf("São Paulo vence em Área.\n");
                } else if (AreaSP < AreaRJ) {
                    printf("Rio de Janeiro vence em Área.\n");
                } else {
                    printf("Ambas as cidades tÃªm a mesma Área.\n");
                }
                break;
            case 3: // PIB
                if (PIBSP > PIBRJ) {
                    printf("São Paulo vence em PIB.\n");
                } else if (PIBSP < PIBRJ) {
                    printf("Rio de Janeiro vence em PIB.\n");
                } else {
                    printf("Ambas as cidades tÃªm o mesmo PIB.\n");
                }
                break;
            case 4: // PIB per capita
                if (PIBPerCapitaSP > PIBPerCapitaRJ) {
                    printf("São Paulo vence em PIB per capita.\n");
                } else if (PIBPerCapitaSP < PIBPerCapitaRJ) {
                    printf("Rio de Janeiro vence em PIB per capita.\n");
                } else {
                    printf("Ambas as cidades tÃªm o mesmo PIB per capita.\n");
                }
                break;
            case 5: // NÃºmero de pontos turÃ­sticos
                if (NumerodePontosTuristicosSP >= NumerodePontosTuristicosRJ){
                    printf("São Paulo vence em Número de pontos turísticos.\n");
                } else if (NumerodePontosTuristicosSP < NumerodePontosTuristicosRJ) {
                    printf("Rio de Janeiro vence em Número de pontos turísticos.\n");
                } else {
                    printf("Ambas as cidades tÃªm o mesmo Número de pontos turísticos.\n");
                }
                break;
            case 6: // Densidade populacional
                if (DensidadeSaoPaulo < DensidadeRioDeJaneiro) {
                    printf("São Paulo vence em densidade populacional (menor é melhor).\n");
                } else if (DensidadeSaoPaulo > DensidadeRioDeJaneiro) {
                    printf("Rio de Janeiro vence em densidade populacional (menor é melhor).\n");
                } else {
                    printf("Ambas as cidades têm a mesma densidade populacional.\n");
                }
                break;
            case 7:
                printf("Saindo do programa.\n"); 
                ;       
                return 0;
                system("cls");
            default:
                printf("Opção Inválida.\n");
                break;
        }

        sleep(5); // Pausa de 5 segundos


        system("cls"); // Descomente para Windows
        printf("\nEscolha um atributo para comparar novamente:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. PIB per capita\n");
        printf("5. Número de pontos turístico\n");
        printf("6. Densidade populacional\n");
        printf("7. Sair\n");
        printf("Digite o nÃºmero correspondente ao atributo: ");
        scanf("%d", &escolha);
    }

    return 0;
}