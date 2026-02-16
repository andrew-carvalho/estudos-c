#include <stdio.h>

int main() {

  // while executa enquanto a condição for verdadeira
  int i = 0;
  while (i < 10) {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  // do while executa uma vez e depois testa a condição e executa enquanto a
  // condição for verdadeira
  do {
    printf("%d ", i);
    i++;
  } while (i < 10);
  printf("\n");

  // for executa de acordo com uma variável de controle definida dentro de sua
  // estrutura
  for (int i = 0; i < 10; i++) {
    printf("%d ", i);
  }
  printf("\n");

  // O comando continue pula a execução de um loop
  for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
      continue;
    }
    printf("%d ", i);
  }
  printf("\n");

  // O comando break termina a execução de um loop
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
      break;
    }
    printf("%d ", i);
  }

  return 0;
}
