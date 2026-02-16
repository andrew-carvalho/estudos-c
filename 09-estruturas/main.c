#include <stdio.h>
#include <stdlib.h>

/*
Estruturas são tipos de dados compostos
que podem conter diversos dados em uma única área de memória
*/
typedef struct {
  char *name;
  int age;
} Person;

/*
Unions tem a mesma função que estruturas
porém, a tamanho do union na memória é de somente do maior valor dentro dela
a idéia é que apenas um dos campos pode ser utilizado
*/
typedef union {
  char male;
  char female;
} Sex;

int main() {
  /*
  Acessamos os atributos de uma estrutura com o operador '.'
  */
  Person andrew;
  andrew.name = "Andrew";
  andrew.age = 22;
  printf("%s - %d\n", andrew.name, andrew.age);

  /*
  Para ponteiros para estruturas podemos modificar os dados diretamente com o
  operador -> ao invés de (*strutura).campo = valor
  */
  Person *person = (Person *)malloc(sizeof(Person));
  person->name = "Nome";
  person->age = 22;
  printf("%s - %d\n", person->name, person->age);
  free(person);

  /*
  No exemplo abaixo, somente o female estará com valor
  (só foi alocado 1 byte na memória)
  */
  Sex sex;
  sex.male = 'M';
  sex.female = 'F';
  printf("%c %c\n", sex.male, sex.female);

  return 0;
}
