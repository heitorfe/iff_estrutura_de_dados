#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "OrderSearch.h"

int main()
{
//variaveis
int n, i;
char busca[50];
//inserir nomes
    printf("Entre com o número de nomes a serem adicionados\n");
    scanf("%d",&n);

    char nomes[n][50];
    printf("Insira os nomes:\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%s", &nomes[i]);
    }
//buscar
    printf("\nEntre com o nome a ser buscado: \n");
        scanf("%s", &busca);
    PesquisaBinaria(n, nomes, busca);

}
