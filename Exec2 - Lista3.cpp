//DECLARAÇÃO DE BIBLIOTECA
#include<stdio.h>

//DECLARAÇÃO DE MAIN
int main(){
	//DECLARAÇÃO DE INT
	int opc, opc2;
	
	//MENU DE PIZZAS
	printf("|-------------------------|\n");
	printf("|       Menu de pizzas    |\n");
	printf("|1 - Pizza Calabresa      |\n");
	printf("|2 - Pizza 4 queijos      |\n");
	printf("|3 - Pizza Portuguesa     |\n");
	printf("|-------------------------|\n");
	
	//MENU DE OPCOES DE TAMANHO 
	printf("\n|-------------------------|\n");
	printf("|       Menu de tamanho   |\n");
	printf("|1 - Pequena - RS 25,00   |\n");
	printf("|2 - Media - RS 30,00     |\n");
	printf("|3 - Grande - RS 35,00    |\n");
	printf("|-------------------------|\n");
	
	//ENTRADA DE DADOS
	printf("Digite o numero de uma das opcoes do menu de pizas:\n");
	scanf("%d", &opc);
	
	printf("Digite o numero de uma das opcoes do menu de tamanho:\n");
	scanf("%d", &opc2);
	
	//PROCESSAMENTO CONDICIONAL
	switch(opc){
		case 1:
			printf("\nVoce escolheu a Pizza de Calabresa ");
		break;
		
		case 2:
			printf("\nVoce escolheu a Pizza de 4 Queijos ");
		break;
		
		case 3:
			printf("\nVoce escolheu a Pizza Portuguesa ");
		break;
		
		default:
			printf("\nVoce escolheu uma pcao Invalida! ");}
			
	switch(opc2){
		case 1:
			printf("\nO preco total e de RS 25,00");
		break;
		
		case 2:
			printf("\nO preco total e de RS 30,00");
		break;
		
		case 3:
			printf("\nO preco total e de RS 35,00");
		break;
		
		default:
			printf("Voce escolheu uma opcao invalida! ");}
	return 0;
}
