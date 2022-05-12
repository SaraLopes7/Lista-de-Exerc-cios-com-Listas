#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  return 0;
}


 if (opçao == 's' && opçao == 'S') { 
        printf("È isto. Deseja ver mais exercíos?\n");
        scanf(" %c", &opçao); }
      else if (opçao == 'n' && opçao == 'N') {
        printf("Obrigado por acessar minha atividade"); }  

  do {
  printf("\tOlá, bem vindo a minha segunda lista de Atvidades\n Selecione o Código do exercício que você deseja rodar:\n");
  printf("\nExercício 1 \nExercício 2 \nExercício 3 \nExercício 4 \nExercício 5 \nExercício 6 \nExercício 7 \nExercício 8 \nExercício 9 \nExercício 10 \nExercício 11 \nExercício 12 \nExercício 13 \nExercício 14 \nExercício 15 \nExercício 16 \nExercício 17 \nExercício 18\n");
  printf("\nDigite um número de 1 a 18 para escolher o exercício:\t");
  scanf("%i", &select);
    }
  while (select>18 || select<1); {
    printf("\nError. Este número não está entre as opções\nSelecione um número de 1 a 18: ");
    scanf("%i", &select); } 