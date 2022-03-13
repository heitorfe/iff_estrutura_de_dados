#include <stdio.h>
#include <stdlib.h>

/*Implemente uma rotina recursiva que liste os 10 primeiros elementos de
Sequência de Fibonacci. Como dica, use a seguinte lógica:

N = número de elementos
Se N = 1 ou N = 2 retorna 1
Se N > 2 retorna Fibonacci(N-1) + Fibonacci(N-2)
Sequência de Fibonacci é a sequência numérica proposta pelo matemático
Leonardo Pisa. A proposta é que cada termo subsequente corresponde à soma
dos dois anteriores. Exemplo: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
*/




int fibonacci(int n)
{
    int resultado = 0;

    if(n==1)
    {
        return 1;
    }
    
    if(n==2)
    {
        return 1;
    }

    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}


int main(void)
{
    int n = 10;
    //printf("Digite o numero de termos de fibonacci desejados: ") ;
    //scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
    printf("%d ", fibonacci(i));

  }
  printf("\n");

}


