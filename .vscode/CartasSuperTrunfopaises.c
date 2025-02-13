#include <stdio.h>

int main(){
    //Definicao das variaveis
printf("Desafio Super Trunfo Paises \n\n");

char nome[50];
int codigo;
long int populacao;
float area, pib;
int pontos_turisticos;

printf("Digite o nome da cidade: \n");
scanf("%s", &nome);

printf("Digite o codigo da cidade: \n");
scanf("%d", &codigo);

printf("Digite a populacao da cidade: \n"); 
scanf("%ld", &populacao);

printf("Digite a area da cidade (km²) \n");
scanf("%f", &area);

printf("Digite o PIB da cidade em bilhoes \n");
scanf("%f",&pib);

printf("Digite os pontos turisticos da cidade \n");
scanf("%d", &pontos_turisticos);

//Exibicao de dados
printf("\n--- Super Trunfo --- \n");
printf("nome: %s\n", nome);
printf("Codigo: %d\n", codigo);
printf("Populacao: %ld\n", populacao);
printf("Area: %.2f km²\n", area);
printf("PIB: %.2f bilhoes\n", pib);
printf("Pontos Turisticos: %d\n",pontos_turisticos);

return 0;



}