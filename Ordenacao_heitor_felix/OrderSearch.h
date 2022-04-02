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



void PesquisaBinaria(int n, char nomes[][50], char busca[50])
{
    int i, primeiro,ultimo,meio;
    InsertSort(nomes, n);
    primeiro=0;
    ultimo=n-1;
    while(primeiro<=ultimo)
    {
        meio=(primeiro+ultimo)/2;
        if (strcmp(busca,nomes[meio])==0)
        {
            printf("Nome encontrado \n");
            break;
        }

        else if(strcmp(busca,nomes[meio])>0)
        {
            primeiro=meio+1;
        }

        else
        {
            ultimo=meio-1;
        }
    }
        printf("Nome não encontrado\n");
 }