#include <stdio.h>

int main() {
  //Declarando as variaveis
  int num1, num2, soma;

  //Entrada de dados
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);

  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  //Calculo da soma
  soma = num1 + num2;

  //Saida de resultado
  printf("A soma de %d e %d é %d", num1, num2, soma);
 return 0;
}