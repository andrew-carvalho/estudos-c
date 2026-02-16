#include <stdio.h>
#include <stdlib.h>

int main() {
  /*
  Para alocar memória dinamicamente, podemos usar a função malloc.
  é preciso castar o ponteiro para o tipo correto
  */
  int *p = (int *)malloc(sizeof(int));

  /*
  Ao alocar a memória é uma boa prática verificar se a alocação foi bem sucedida
  */
  if (p == NULL) {
    printf("Erro ao alocar memória\n");
    return -1;
  }

  *p = 10;
  printf("%p = %d\n", p, *p);

  /*
  Depois de utilizar a memória é obrigatório desalocar a memória com o comando
  free
  */
  free(p);

  /*
  A função realloc, realoca um pedaço de memória para um trecho maior ou menor
  */
  p = realloc(p, sizeof(int) * 2);
  *p = 10;
  *(p + 1) = 20;
  printf("%p = %d %d\n", p, *p, *(p + 1));
  free(p);

  return 0;
}
