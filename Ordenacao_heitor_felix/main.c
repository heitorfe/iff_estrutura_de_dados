//menu
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "OrderSearch.h"
#define const 10

void main(){

int op=0, n=0, i, posicao=0, teste=9;
char op2;
char nomes[const][50], busca[20];

do
{
    printf("1. Inserir Nome\n2. Ordenar Nomes\n3. Pesquisar Nome\n4. Listar Nomes\n5. Encerrar Programa\n");
    scanf("%d", &op);

    if(op== 1)  //inserir nome
        {printf("Entre com o nome: ");
        scanf("%s", nomes[posicao]);
        posicao++;
        printf("Nome inserido!\nQualquer tecla para voltar para o menu\n");
        scanf("  %c", &op2);
        system("clear");}
        
    if(op== 2)  //Ordenar Nomes
    {n = posicao;
    InsertSort(nomes, n);
    printf("Nomes ordenados\nQualquer tecla para voltar para o menu\n");
    scanf(" %c", &op2);
    system("clear");}

    if(op== 3)  //Pesquisar nome
    {printf("Digite o nome que deseja encontrar: ");
    scanf("%s", busca);
    teste = PesquisaBinaria(n, nomes, busca);
    if(teste==1)
    {
        printf("Nome encontrado \n Pressione qualquer tecla para voltar\n");
    }

    else
    {
        printf("Nome não encontrado\n Pressione qualquer tecla para voltar\n");
    }
    scanf(" %c", &op2);
    system("clear");}
    
    if(op== 4)  // Listar Nome
        {
        if(posicao==0)
        {
            printf("Não há nomes no vetor\n\nQualquer tecla para voltar para o menu\n");
            scanf(" %c", &op2);
        }
        
        else
        {
        n=posicao;
        for(i=0;i!=n;i++)
        {
            printf("%s\n", nomes[i]);
        }
        printf("\n\nQualquer tecla para voltar para o menu\n");
        scanf(" %c", &op2);
        } 
        system("clear");
        }

    if(op== 5)  // Encerrar programa
        {
            printf("\nPrograma encerrado \n");
        }
    
    else
        {
            printf("Comando inválido\n");
        }
    }

while(op!=5);
}