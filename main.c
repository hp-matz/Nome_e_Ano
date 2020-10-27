#include <stdio.h>
#define clearScreen() printf("\033[H\033[J")

int main(void) {
  char nomeAluno[30] = "";
  int anoNasc = 0;
  int idade = 0;
  clearScreen(); // limpa a tela
  
  printf("Escreva o nome do aluno: ");
  scanf("%s", nomeAluno);

  printf("\nEscreva o ano de nascimento do aluno: ");
  scanf("%i", &anoNasc);

  idade = 2020 - anoNasc;
  
  if (idade >= 18){

    printf("\nO aluno %s é maior de idade e tem %i anos", nomeAluno, idade);
  
  }

  else {

    printf("\nO aluno %s é menor de idade e tem %i anos", nomeAluno, idade);
  }

  return 0;

}