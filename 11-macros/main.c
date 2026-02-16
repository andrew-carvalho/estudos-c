#include <stdio.h>

/*
Macros são diretivas do pré-processador que podem definir trechos de código
que serão colados quando chamados no código
*/
#define ARRAY_SIZE(a) sizeof(a) / sizeof(a[0])

/*
Também podemos usar macros para definir constantes no código
*/
#define PROGRAM_NAME "Example"

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int array_size = ARRAY_SIZE(array);
  printf("%d\n", array_size);

  printf("%s\n", PROGRAM_NAME);
  return 0;
}
