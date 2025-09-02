#include <stdio.h>
#include <string.h>

struct CartaSuperTrunfo {
   char estado;
   char codigo[4]; // Supondo um comprimento máximo de 3 caracteres + ''
   char cidade[50];
   int populacao;
   float area;
   float pib;
   int turismo;
};

void lerCarta(struct CartaSuperTrunfo *carta) {
   printf("\nDigite o estado (uma letra de A a H): ");
   scanf(" %c", &carta->estado);
   printf("Digite o código da carta: ");
   scanf(" %s", carta->codigo);
   printf("Digite o nome da cidade: ");
   scanf(" %[^\n]", carta->cidade); //Início do scanf assim para poder exibir depois o que o usuário entrou com espaço, por exemplo "São Paulo"
   printf("Digite a população da cidade: ");
   scanf(" %d", &carta->populacao);
   printf("Digite a área da cidade: ");
   scanf(" %f", &carta->area);
   printf("Digite o PIB: ");
   scanf(" %f", &carta->pib);
   printf("Digite a quantidade de pontos turísticos na cidade: ");
   scanf(" %d", &carta->turismo);
}

int main() {

   struct CartaSuperTrunfo carta1, carta2;

   printf("Insira os dados da primeira carta:");
   lerCarta(&carta1);

   printf("\nInsira os dados da segunda carta:");
   lerCarta(&carta2);

   if (carta1.populacao > carta2.populacao) { //Atributo escolhido para comparação foi a população
        printf("\n\nCidade 1 tem maior população.\n"); //Pulo duplo para melhor exibição
} else {
        printf("\n\nCidade 2 tem maior população.\n"); //Pulo duplo para melhor exibição
}

   if (carta1.populacao > carta2.populacao) {
   printf("\nA cidade vencedora é: %s!\n",
          carta1.cidade);
} else {
   printf("\nA cidade vencedora é: %s!\n",
          carta2.cidade);
}
   return 0;
}