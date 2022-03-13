/*
Implemente uma rotina recursiva para determinar o maior divisor comum entre
2 números naturais a e b, baseando-se nas propriedades do algoritmo de
Euclides que diz que:
MDC(a,b) = a se b = 0
MDC(a,b) = MDC(b, (a mod b)) se b <> 0
*/


#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b)
{
    int r;
    while(b!=0)
    {
        r = a%b;
        a = b;
        b = r;
    }

    return a;
}



int main(void){
    int a, b;
    printf("\ndigite os dois números inteiros: ");
    scanf("%d\n%d", &a, &b);
    printf("\nO MDC entre %d e %d é %d\n\n", a, b, mdc(a,b));



}

/* APLICACAO MANUAL DO ALGORITMO

MDC(27, 36)
27, 36   3
9, 12    3
3, 4     3
1, 4     4
1, 1    

*/