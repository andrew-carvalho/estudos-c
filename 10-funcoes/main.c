#include <stdio.h>

/*
As assinaturas da função apenas dizem que eles são definidas em algum outro lugar
Elas determinam seus parâmetros (se existentes) e retorno
*/
int sum(int a, int b);

/*
Por padrão, os parâmetros passados para uma função criam uma cópia do valor na memória
para alterar um valor por uma função, é preciso passar um ponteiro
*/
void swap(int *a, int *b);

int main() {
    int result = sum(10, 20);
    printf("%d\n", result);

    int a = 10;
    int b = 20;
    swap(&a, &b);
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}

int sum(int a, int b) {
    return a + b;
}

void swap(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}
