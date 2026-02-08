#include <stdio.h>

int main()
{
    /*
    Sintaxe de declaração de variáveis: tipo nome = valor;

    Os tipos de dados disponíveis na linguagem são:
    - int -> números inteiros
    - float -> números decimais
    - double -> números decimais (ocupa o dobro do tamanho de um float)
    - char -> caracteres (também pode guardar números)
    */
    int birth_day = 26;
    float height = 1.74;
    double weight = 87.50;
    char sex = 'M';

    /*
    As variáveis podem ser:
    - signed: contém somente números positivos
    - unisigned: contém números negativos e positivos
    */
    signed int money = -1000;
    unsigned int age = 22;

    /*
    A função printf() consegue imprimir variáveis mas para isso deve-se usar indicadores de formatação especiais para cada tipo de dado:
    - %d ou %i -> int
    - %f ou %F -> float
    - %lf -> double
    - %c -> char
    - %s -> strings (array de caracteres)
    */
    printf("%d %f %lf %c\n", birth_day, height, weight, sex);

    /*
    A função sizeof() retorna o tamanho de um dado na memória em bytes (o tamanho pode variar de acordo com a plataforma)
    */
    printf("int -> %zu bytes\n", sizeof(birth_day));
    printf("float -> %zu bytes\n", sizeof(height));
    printf("double -> %zu bytes\n", sizeof(weight));
    printf("char -> %zu bytes\n", sizeof(sex));

    /*
    Existe uma maneira de duplicar o tamanho de uma variável com a adição dos seguintes modificadores antes do tipo:
    - long
    - long long
    */
    long int example = 10;
    long long int example_2 = 10;
    printf("long int -> %zu bytes\n", sizeof(example));
    printf("long long int -> %zu bytes\n", sizeof(example_2));

    return 0;
}