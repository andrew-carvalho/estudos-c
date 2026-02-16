#include <stdio.h>

int main() {
  // Em C os vetores só podem conter 1 tipo e são de tamanho fixo
  int numbers[5];

  // A indexação do array começa em 0
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;
  numbers[4] = 5;
  printf("%d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3],
         numbers[4]);
  printf("\n");

  /*
  No caso acima também seria possível declarar o array da seguinte forma:
  int numbers[] = { 1, 2, 3, 4, 5 };
  */

  // Matrizes seguem a mesma forma
  int numbers_matrix[2][2] = {{1, 2}, {3, 4}};
  printf("[0][0] = %d\n", numbers_matrix[0][0]);
  printf("[0][1] = %d\n", numbers_matrix[0][1]);
  printf("[1][0] = %d\n", numbers_matrix[1][0]);
  printf("[1][1] = %d\n", numbers_matrix[1][1]);

  return 0;
}
