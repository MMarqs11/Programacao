#include "stdlib.h"
#include "stdio.h"

int main(int argc, char const *argv[])
{
    int a, b, soma;

    printf("Digite o primeiro número: ")
    scanf("%i",&a);

    printf("Digite o segundo número; ")
    scanf("%i",&b);

    soma = a + b;

    printf("A Soma de %i e %i é de %i", a, b, soma)

    return 0;
}
