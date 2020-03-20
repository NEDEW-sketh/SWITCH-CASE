//DECLARAÇÃO DE BIBLIOTECA
#include<stdio.h>

//DECLARAÇÃO DE MAIN
int main(){
	//DECLARAÇÃO DE INT
	int opc, opc2, qtd, tam, prec_unit;
	float total;
		
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
	
	printf("Quantas pizzas voce vai querer? \n");
	scanf("%d", &qtd);
	
	//MENU DE SABORES DAS PIZZAS
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
	
	//MENU DE PREÇO DAS PIZZAS
	switch(opc2){
		case 1:
			prec_unit = 25;
		break;
		
		case 2:
			prec_unit = 30;
		break;
		
		case 3:
			prec_unit = 35;
		break;
		
		default:
			printf("Voce escolheu uma opcao invalida! ");}
	//PROCESSAMENTO ARITIMETICO
	total = prec_unit * qtd;
	printf("\nO Preco total da compra e de RS %.2f", total);
	return 0;
}
