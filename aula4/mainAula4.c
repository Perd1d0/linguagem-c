#include <math.h> //Bliblioteca de matematica.
#include <stdio.h>

int main() {
  //Declarndo as variaveis
float a,b,c;

  //Entrada dos dados
  printf("Digite o valor de b:");
  scanf("%f",&b);

  printf("Digite o valor de c:");
  scanf("%f",&c);

  //Calculando o valor de a
  a = sqrt((b*b)+(c*c));

  printf("A hipotenusa so triangulo e: %.1f\n",a);
  
  return 0; 
}