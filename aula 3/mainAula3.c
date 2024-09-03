#include <stdio.h>

int main() {
 //variaveis
  float peso, altura, imc;

  //entrada de dados
  printf("Digite seu peso: ");
  scanf("%f", &peso);


  printf("Digite seu altura: ");
  scanf("%f", &altura);

  //Calculando o imc
  imc = peso / (altura * altura);

  //Exibir IMC
  printf("Seu imc é: %.2f\n", imc);

  //Classiicando o seu imc
  if(imc < 18.5){
    printf("Classificação: Abaixo do peso\n");
  } else if (imc >= 18.5 && imc < 24.9){
      printf("Classificação: Peso normal\n");
} else if (imc >= 18.5 && imc < 24.9){
    printf("Classificação: Sobrepeso\n");
  } else {
    printf("Classificação: Obesidade\n");
  }
  
  return 0;
}
