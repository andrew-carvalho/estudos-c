#include <stdio.h>

int main()
{
    /*
    Operadores aritméticos:
    - + -> soma
    - - -> subtração
    - * -> multiplicação
    - / -> divisão (se feita com um número inteiro o resultado é truncado)
    - % -> módulo (resto da divisão)
    - ++ -> soma 1 ao valor de uma variável
    - -- -> subtrai 1 ao valor de uma variável
    */
    printf("5 + 2 = %d\n", (5 + 2));
    printf("5 - 2 = %d\n", (5 - 2));
    printf("5 * 2 = %d\n", (5 * 2));
    printf("5 / 2 = %d\n", (5 / 2));
    printf("5 / 2 = %f (float)\n", ((float)5 / (float)2));
    int x = 10;
    printf("x = %d\n", x);
    x++;
    printf("x++ = %d\n", x);
    x--;
    printf("x-- = %d\n", x);
    printf("\n");

    /*
    Operadores relacionais
    - == -> igual
    - != -> diferente
    - > -> maior que
    - < -> menor que
    - >= -> maior igual
    - <= -> menor igual
    Em C o '0' é falso e qualquer outro valor é verdadeiro (geralmente 1)
    */
    int a = 2;
    int b = 5;
    printf("%d == %d -> %d\n", a, b, (a == b));
    printf("%d != %d -> %d\n", a, b, (a != b));
    printf("%d > %d -> %d\n", a, b, (a > b));
    printf("%d < %d -> %d\n", a, b, (a < b));
    printf("%d >= %d -> %d\n", a, b, (a >= b));
    printf("%d <= %d -> %d\n", a, b, (a <= b));
    printf("\n");

    /*
    Operadores bit a bit
    - & -> AND
    - | -> OR
    - ^ -> XOR
    - << -> Deslocamento para esquerda
    - >> -> Deslocamento para direita
    */
    int c = 17; // 0001 0001
    int d = 99; // 0110 0011
    printf("%d (0001 0001) & %d (0110 0011) = %d (0000 0001)\n", c, d, (c & d));
    printf("%d (0001 0001) | %d (0110 0011) = %d (0111 0011)\n", c, d, (c | d));
    printf("%d (0001 0001) ^ %d (0110 0011) = %d (0111 0010)\n", c, d, (c ^ d));
    printf("%d (0001 0001) << 2 = %d (0000 0100)\n", c, (c << 2));
    printf("%d (0001 0001) >> 2 = %d (0100 0100)\n", c, (c >> 2));
    printf("\n");

    /*
    Operadores de atribuição:
    - += -> soma ao valor atual
    - -= -> subtrai do valor atual
    - *= -> multiplica do valor atual
    - /= -> divide do valor atual
    - %= -> resultado da divisão com valor atual
    - <<= -> desloca valor atual à esquerda
    - >>= -> desloca valor atual à direita
    - &= -> AND binário
    - |= -> OR binário
    - ^= -> XOR binário
    */
    int e = 17;
    printf("e = %d\n", e);
    e += 2;
    printf("e += 2 = %d\n", e);
    e -= 2;
    printf("e -= 2 = %d\n", e);
    e *= 2;
    printf("e *= 2 = %d\n", e);
    e /= 2;
    printf("e /= 2 = %d\n", e);
    e %= 2;
    printf("e %%= 2 = %d\n", e);
    e = 17;
    e <<= 2;
    printf("e <<= 2 = %d (0000 0100)\n", e);
    e >>= 2;
    printf("e >>= 2 = %d (0001 0001)\n", e);
    e &= 99;
    printf("e &= 99 (0110 0011) = %d (0000 0001)\n", e);
    e = 17;
    e |= 99;
    printf("e |= 99 (0110 0011) = %d (0111 0011)\n", e);
    e = 17;
    e ^= 99;
    printf("e |= 99 (0110 0011) = %d (0111 0010)\n", e);

    return 0;
}