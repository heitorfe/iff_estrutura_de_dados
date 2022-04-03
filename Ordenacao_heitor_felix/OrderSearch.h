#include <stdio.h>
#include <string.h>


char InsertSort(char nome[][50], int n)  //
{
    int x, y, r;
    char aux[20];
    for( x=0; x<=n-1; x++ )
    {
        for( y=x+1; y<=n-1; y++ )
        {
            r = strcmp( nome[x], nome[y] );
            if( r>0 )
            {
                strcpy( aux, nome[x] );
                strcpy( nome[x], nome[y] );
                strcpy( nome[y], aux );
            }
        }
    }         
    
}



int PesquisaBinaria(int n, char nomes[][50], char busca[50])
{
    int i, inferior,superior,meio, retorno=0;
    InsertSort(nomes, n);
    inferior=0;
    superior=n-1;

    while(inferior<=superior)
    {
        meio=(inferior+superior)/2;
        if (strcmp(busca,nomes[meio])==0)
        {
            // printf("Nome encontrado \n Pressione qualquer tecla para voltar\n");
            retorno++;
            return retorno;
        }

        else if(strcmp(busca,nomes[meio])>0)
        {
            inferior=meio+1;
        }

        else
        {
            superior=meio-1;
        }
    }
        // printf("Nome não encontrado\n");
        return retorno;
 }

 