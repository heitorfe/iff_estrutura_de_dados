#include <stdio.h>
#include <stdlib.h>


int potencia(int x, int y)
{
    int resultado, contador;
    if (y == 0)
    {
        resultado = 1;
    }

    else
    {
        resultado = x * potencia(x, y-1);
    }
    return resultado;
}


int main(void)
{
    int numero, resultado, expoente;

    printf("Digite um número inteiro:");
    scanf("%i", &numero);
    printf("Digite a potencia :");
    scanf("%i", &expoente);
    resultado = potencia(numero, expoente);
    printf("O resultado é: %i\n\n", resultado);

}


/*
x = 3
y = 3

resultado = x*x 
resultado = resultado*x

x = 3
y = 4
resultado = x
resultado = resultado*x
resultado = resultado*x
resultado = resultado*x




*/