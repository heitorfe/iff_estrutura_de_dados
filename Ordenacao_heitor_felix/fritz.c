//menu
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "OrderSearch.h"
#define const 10

void main(){

int op=0, n=0;
int i=0;
int posicao=0;
char nomes[const][50], busca[20];

do
{
    printf("1. Inserir Nome\n2. Ordenar Nomes\n3. Pesquisar Nome\n4. Listar Nomes\n5. Encerrar Programa\n");
    scanf("%d", &op);


    if(op==1)  //inserir nome
    {
        printf("Entre com o nome: ");
        scanf("%s", nomes[posicao]);
        posicao++;
        
    }

    else if(op==2)  //Ordenar Nomes
    {

    n = posicao;
    InsertSort(nomes, n);

    }
    else if(op==3)  //Pesquisar nome
    {
    printf("Digite o nome que deseja encontrar: ");
    scanf("%s", busca);
    PesquisaBinaria(n, nomes, busca);

    }

    else if(op==4)  // Listar Nome
    {
        for(i=0;i!=n;i++)
        {
            printf("%s\n", nomes[i]);
        }
        
    }

    else if(op==5)  // Encerrar programa
    {
        printf("Encerrar programa\n");
    }

    else
    {
        printf("Comando inválido\n");
    }



}

while(op!=5);
}