#include <stdio.h>

int main() {
  char nome[50]; // Array para armazenar o nome
  int idade;     // Variável inteira para idade
  int altura;    // Variável float para altura

  // Entradas do Usúario
  printf("Digite seu nome: ");
  fgets(nome, sizeof(nome), stdin); // Le a entrada do usuario
  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Digite sua altura: ");
  scanf(" %d", &altura);

  // Saída dos dados
  printf("\-----------Dados de informados------------\n");
  printf("Nome: %s", nome);
  printf("Idade: %d anos\n", idade);
  printf("Altura: %.2f metros\n", altura);

  return 0;
}