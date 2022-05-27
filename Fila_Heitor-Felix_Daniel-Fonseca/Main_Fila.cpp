#include<stdlib.h>
#include <stdlib.h>
#include <locale.h>
#include "fila.h"
#include <string.h>



main(){
	
	struct sfila fila_Campos, fila_Guarus;
	int opcao;
	char carro, primeiro_carro_campos, primeiro_carro_guarus, op;
	setlocale(LC_ALL, "Portuguese");
	
	qinit(&fila_Campos);
	qinit(&fila_Guarus);
	
	while(opcao!=4){
	
	
	
	printf("\n\n\nMENU DO PROGRAMA\n\n\n");
	
	
	
	printf("1 - Cadastrar Campos-Guarus.\n\n\n");
	printf("2 - Cadastrar Guarus-Campos.\n\n\n");
	printf("3 - Liberar Travessia.\n\n\n");
	printf("4 - Sair.\n\n\n");
	scanf("%i", &opcao);
	
	
	system("cls");

	switch(opcao){
		
		case 1: 
			if(qisFull(&fila_Campos) == 1){
				printf("A fila de Campos est� cheia!");
			}
			else{
			
			printf("Digite a identifica��o do carro na fila de Campos: ");
			scanf(" %c", &carro);
			
			enqueue(&fila_Campos, carro);
			}
		
		break;
		
		
		
		
		case 2:
			if(qisFull(&fila_Guarus) == 1){
				printf("A fila de Guarus est� cheia!");
			}
			else{
			
			printf("Digite a identifica��o do carro na fila de Guarus: ");
			scanf(" %c", &carro);
			
			enqueue(&fila_Guarus, carro);
			}
		break;
		
		
		
		
		case 3:
		
		if(qisEmpty(&fila_Campos) == 0 && qisEmpty(&fila_Guarus) == 0){
			
			primeiro_carro_campos =	first(&fila_Campos);
			printf("\n\nSentido Campos-Guarus:\n\nAtravessando carro: %c\n\n", primeiro_carro_campos);
			primeiro_carro_guarus = first(&fila_Guarus);
			printf("\n\nSentido Guarus-Campos:\n\nAtravessando carro: %c\n\n", primeiro_carro_guarus);
			
			printf("\n\nDeseja prosseguir?(S/N)\n\n");
			scanf(" %c", &op);
			
			if(op=='S'){
			
			
			dequeue(&fila_Campos);
			dequeue(&fila_Guarus);
			}
			
			else if(op=='N'){
				break;
			}
			else{
				printf("Comando inv�lido!");
			}
		}
		
		else if(qisEmpty(&fila_Campos) == 0 && qisEmpty(&fila_Guarus) == 1){
			primeiro_carro_campos =	first(&fila_Campos);
			printf("\n\nSentido Campos-Guarus:\n\nAtravessando carro: %c\n\n", primeiro_carro_campos);
			printf("A fila de Guarus est� vazia!");
			
			printf("\n\nDeseja prosseguir?(S/N)\n\n");
			scanf(" %c", &op);
			
				if(op=='S'){
			
			
			dequeue(&fila_Campos);
			
			}
			
			else if(op=='N'){
				break;
			}
			else{
				printf("Comando inv�lido!");
			}
		
		}
		
		else if(qisEmpty(&fila_Campos) == 1 && qisEmpty(&fila_Guarus) == 0){
			primeiro_carro_guarus = first(&fila_Guarus);
			printf("\n\nSentido Guarus-Campos:\n\nAtravessando carro: %c\n\n", primeiro_carro_guarus);
			printf("A fila de Campos est� vazia!");
			
			printf("\n\nDeseja prosseguir?(S/N)\n\n");
			scanf(" %c", &op);
				if(op=='S'){
			
			
		
			dequeue(&fila_Guarus);
			}
			
			else if(op=='N'){
				break;
			}
			else{
				printf("Comando inv�lido!");
			}
		}
		
		else{
			printf("As duas filas est�o vazias!");
		}
		
		break;	
		
		
		case 4: 
			
			printf("Voc� saiu do programa!");
			
		break;
		
		
		
		default:
		
		printf("\n\nVoc� digitou um comando inv�lido... Tente novamente!");
		break;			
		
		
		
		
		
	}
	
	
}
	
}
