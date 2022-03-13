/*Implemente uma rotina recursiva para inverter uma dada palavra. Como dica,
use a seguinte lógica:
n = tamanho(palavra)
Se n = 1 Então retorne palavra
Senão retorne Inverte(Substring(palavra, 2, n)) + substring (palavra, 1,1)
Exemplo: CASA
n = 4
Substring(‘casa’, 2, n) = asa
Substring(‘casa’, 1,1 ) = c
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char inversor(char string[], int len)
{
    if(len==1)
    {
        return string[0];
    }

    else
    {

        return string[len-1];

    }
}

int main(void){
    char string[20];
    printf("Digite uma string: ");
    scanf("%s", string);

    int tamanho = strlen(string);
    for (; tamanho!=0; tamanho--)
    {
    printf("%c", inversor(string, tamanho));
    }

    printf("\n");

}


