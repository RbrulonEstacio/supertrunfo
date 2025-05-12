#include <stdio.h>
#include <stdbool.h>    
#include <stdlib.h>
#include <unistd.h> // Para 
#include <locale.h>
#include <string.h> // Para usar a função strcpy

int main() {
    // setlocale(LC_NUMERIC, "Portuguese_Brazil"); // Configura o locale para português
    // setlocale(LC_ALL, ""); // Configura o locale para o padrão do sistema

    // Informações para São Paulo
    // char CodigoCartaSP[50] = "01";
    // char NomeCidadeSP[100] = "São Paulo";
    float PopulacaoSP = 12300000;
    float AreaSP = 30000.0;
    float PIBSP = 699.28f; // Valor exemplo em bilhões
    float PIBPerCapitaSP = PIBSP / PopulacaoSP * 1000000; // Calculando PIB per capita
    float NumerodePontosTuristicosSP = 15;

    // Informações para Rio de Janeiro
    // char EstadoRJ[50] = "RJ";
    // char CodigoCartaRJ[50] = "02";
    // char NomeCidadeRJ[100] = "Rio de Janeiro";
    float PopulacaoRJ = 6748000;
    float AreaRJ = 12000.0;
    float PIBRJ = 400.0; // Valor exemplo em bilhões
    float PIBPerCapitaRJ = PIBRJ / PopulacaoRJ * 1000000; // Calculando PIB per capita
    float NumerodePontosTuristicosRJ = 20;

    // Calculando densidade populacional para ambas as cidades
    
    float DensidadeSaoPaulo = (float)PopulacaoSP / AreaSP;
    float DensidadeRioDeJaneiro = (float)PopulacaoRJ / AreaRJ;

   
    int escolha;
    printf("Escolha um atributo para comparar:\n");
    printf("1. Popula��o\n");
    printf("2. �rea\n");
    printf("3. PIB\n");
    printf("4. PIB per capita\n");
    printf("5. N�mero de pontos tur�sticos\n");
    printf("6. Densidade populacional\n");
    printf("7. Sair\n");
    printf("Digite o N�mero correspondente ao atributo: ");
  

    scanf("%d", &escolha); 

    while (1) {
        switch (escolha) {
            case 1: // População
                if (PopulacaoSP > PopulacaoRJ) {
                    printf("S�o Paulo vence em popula��o.\n");
                } else if (PopulacaoSP < PopulacaoRJ) {
                    printf("Rio de Janeiro vence em popula��o.\n");
                } else {
                    printf("Ambas as cidades t�m a mesma popula��o.\n");
                }
                break;
            case 2: // Área
                if (AreaSP > AreaRJ) {
                    printf("S�o Paulo vence em �rea.\n");
                } else if (AreaSP < AreaRJ) {
                    printf("Rio de Janeiro vence em �rea.\n");
                } else {
                    printf("Ambas as cidades têm a mesma �rea.\n");
                }
                break;
            case 3: // PIB
                if (PIBSP > PIBRJ) {
                    printf("S�o Paulo vence em PIB.\n");
                } else if (PIBSP < PIBRJ) {
                    printf("Rio de Janeiro vence em PIB.\n");
                } else {
                    printf("Ambas as cidades têm o mesmo PIB.\n");
                }
                break;
            case 4: // PIB per capita
                if (PIBPerCapitaSP > PIBPerCapitaRJ) {
                    printf("S�o Paulo vence em PIB per capita.\n");
                } else if (PIBPerCapitaSP < PIBPerCapitaRJ) {
                    printf("Rio de Janeiro vence em PIB per capita.\n");
                } else {
                    printf("Ambas as cidades têm o mesmo PIB per capita.\n");
                }
                break;
            case 5: // Número de pontos turísticos
                if (NumerodePontosTuristicosSP >= NumerodePontosTuristicosRJ){
                    printf("S�o Paulo vence em N�mero de pontos tur�sticos.\n");
                } else if (NumerodePontosTuristicosSP < NumerodePontosTuristicosRJ) {
                    printf("Rio de Janeiro vence em N�mero de pontos tur�sticos.\n");
                } else {
                    printf("Ambas as cidades têm o mesmo N�mero de pontos tur�sticos.\n");
                }
                break;
            case 6: // Densidade populacional
                if (DensidadeSaoPaulo < DensidadeRioDeJaneiro) {
                    printf("S�o Paulo vence em densidade populacional (menor � melhor).\n");
                } else if (DensidadeSaoPaulo > DensidadeRioDeJaneiro) {
                    printf("Rio de Janeiro vence em densidade populacional (menor � melhor).\n");
                } else {
                    printf("Ambas as cidades t�m a mesma densidade populacional.\n");
                }
                break;
            case 7:
                printf("Saindo do programa.\n"); 
                ;       
                return 0;
                system("cls");
            default:
                printf("Op��o Inv�lida.\n");
                break;
        }

        sleep(5); // Pausa de 5 segundos


        system("cls"); // Descomente para Windows
        printf("\nEscolha um atributo para comparar novamente:\n");
        printf("1. Popula��o\n");
        printf("2. �rea\n");
        printf("3. PIB\n");
        printf("4. PIB per capita\n");
        printf("5. N�mero de pontos tur�stico\n");
        printf("6. Densidade populacional\n");
        printf("7. Sair\n");
        printf("Digite o número correspondente ao atributo: ");
        scanf("%d", &escolha);
    }

    return 0;
}