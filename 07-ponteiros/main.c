#include <stdio.h>

int main()
{
    /*
    Ponteiros são variáveis que armazenam endereços de memória
    em C o operador & retorna o endereço de uma variável
    */
    int x = 10;
    int *p = &x;

    /*
    Para acessar o valor armazenado no endereço no ponteiro é preciso de-referenciar ele
    Em C podemos usar o operador *
    */
    printf("%p = %d\n", p, *p);

    /*
    Arrays em C são ponteiros para o primeiro elemento na lista
    com isso podemos pegar o ponteiro da variável e somar ao índice
    a linguagem C cuida de pular os bytes necessários e acessar o próximo elemento automaticamente
    */
    int numbers[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(numbers + i));
    }
    printf("\n");

    /*
    Strings em C são arrays de caracteres onde o último elemento da lista é o '\0'
    assim como arrays elas podem ser manipuladas como ponteiros
    */
    char *name = "Andrew";
    printf("%s\n", name);

    return 0;
}