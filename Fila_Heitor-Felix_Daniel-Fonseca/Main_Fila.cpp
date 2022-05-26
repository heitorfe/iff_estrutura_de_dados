#include<stdlib.h>
#include <stdlib.h>
#include <locale.h>
#include "fila.h"
#include <string.h>



main(){
	
	struct sfila fila_Campos, fila_Guarus;
	int opcao;
	char carro, primeiro_carro_campos, primeiro_carro_guarus;
	setlocale(LC_ALL, "Portuguese");
	
	qinit(&fila_Campos);
	qinit(&fila_Guarus);
	
	while(opcao!=6){
	
	
	
	printf("\n\n\nMENU DO PROGRAMA\n\n\n");
	
	
	
	printf("1 - Adicionar carro na fila Campos\n\n\n");
	printf("2 - Adicionar carro na fila de Guarus\n\n\n");
	printf("3 - Remover carros das filas\n\n\n");
	printf("4 - Primeiro carro da fila de Campos.\n\n\n");
	printf("5 - Primeiro carro da fila de Guarus.\n\n\n");
	printf("6 - Sair do programa.\n\n\n");
	scanf("%i", &opcao);
	
	
	system("cls");

	switch(opcao){
		
		case 1: 
			if(qisFull(&fila_Campos) == 1){
				printf("A fila de Campos está cheia!");
			}
			else{
			
			printf("Digite a identificação do carro na fila de Campos: ");
			scanf(" %c", &carro);
			
			enqueue(&fila_Campos, carro);
			}
		
		break;
		
		
		
		
		case 2:
			if(qisFull(&fila_Guarus) == 1){
				printf("A fila de Guarus está cheia!");
			}
			else{
			
			printf("Digite a identificação do carro na fila de Guarus: ");
			scanf(" %c", &carro);
			
			enqueue(&fila_Guarus, carro);
			}
		break;
		
		
		
		
		case 3:
		
		if(qisEmpty(&fila_Campos) == 0 && qisEmpty(&fila_Guarus) == 0){
			
			primeiro_carro_campos =	first(&fila_Campos);
			printf("\n\nO carro que saiu da fila de Campos foi: %c\n\n", primeiro_carro_campos);
			primeiro_carro_guarus = first(&fila_Guarus);
			printf("\n\nO carro que saiu da fila de Guarus foi: %c\n\n", primeiro_carro_guarus);
			
			
		dequeue(&fila_Campos);
		dequeue(&fila_Guarus);
		
		}
		
		else if(qisEmpty(&fila_Campos) == 0 && qisEmpty(&fila_Guarus) == 1){
			printf("A fila de Guarus está vazia! Adicione carros.");
		}
		
		else if(qisEmpty(&fila_Campos) == 1 && qisEmpty(&fila_Guarus) == 0){
			printf("A fila de Campos está vazia! Adicione carros.");
		}
		
		else{
			printf("As duas filas estão vazias! Adicione carros.");
		}
		
		break;	
		
		
		
		
		case 4:
			
			primeiro_carro_campos = first(&fila_Campos);
			printf("\n\nO primeiro carro da fila de Campos é: %c\n\n", primeiro_carro_campos);
			
		break;
		
		
		
		case 5:
			
			primeiro_carro_guarus = first(&fila_Guarus);
			printf("O primeiro carro da fila de Guarus é: %c", primeiro_carro_guarus);
			
		break;
		
		
		
		case 6: 
			
			printf("Você saiu do programa!");
			
		break;
		
		
		
		default:
		
		printf("\n\nVocê digitou um comando inválido... Tente novamente!");
		break;			
		
		
		
		
		
	}
	
	
}
	
}
