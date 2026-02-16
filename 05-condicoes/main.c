#include <stdio.h>

int main() {
  // Estruturas condicionais testam se uma condição é verdadeira
  int age = 17;
  if (age >= 18) {
    printf("Pode votar\n");
  } else if (age > 200) {
    printf("Idade inválida\n");
  } else {
    printf("Nao pode votar\n");
  }

  // Existe também o operador ternário que testa um condição simples
  int allowed_to_enter = (age >= 18 ? 1 : 0);
  if (allowed_to_enter) {
    printf("Entrada permitida\n");
  } else {
    printf("Entrada bloqueada\n");
  }

  // Para o caso de múltiplas condições podemos utilizar a estrutura switch case
  char sex = 'M';
  switch (sex) {
  case 'M':
    printf("Masculino\n");
    break;
  case 'F':
    printf("Feminino\n");
    break;
  default:
    printf("Indefinido\n");
    break;
  }
  return 0;
}
