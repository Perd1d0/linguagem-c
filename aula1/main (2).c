#include <stdio.h>

int main(void) {
  // Declarandos as variáveis
  float num1, num2, num3, media;

  // Entrada de dados

  printf("Digite o primeiro número: ");
  scanf("%f", &num1);

  printf("Digite o segundo número: ");
  scanf("%f", &num2);

  printf("Digite o terceiro número: ");
  scanf("%f", &num3);

  // Calculo da média
  media = (num1 + num2 + num3) / 3;

  // Exibindo o resultado
  printf("A média dos trê números é: %.2f\n", media);
  return 0;
}