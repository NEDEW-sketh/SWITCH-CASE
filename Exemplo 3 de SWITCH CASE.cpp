#include<stdio.h>
int main(){ 
int opc, num1, num2, result;

printf("------------------------------------------------------\n");
printf("|Escolha umas das opcoes para fazer operacoes loicas |\n");
printf("|1 - AND                                             |\n");
printf("|2 - NAND                                            |\n");
printf("|3 - OR                                              |\n");
printf("|4 - NOR                                             |\n");
printf("|5 - XOR                                             |\n");
printf("------------------------------------------------------\n");

printf("Digite o numero da opcao desejada! \n");
scanf("%d", &opc);

printf("Digite dois numeros binarios 0 ou 1 \n");
scanf("%d %d", &num1, &num2);

switch(opc){
	case 1:
		result = num1 and num2;
	break;
	
	case 2:
		result = not (num1 and num2);
	break;
	
	case 3:
		result = num1 or num2;
	break;
	
	case 4:
		result = not (num1 or num2);
	break;
	
	case 5:
		result = num1 xor num2;
	break;
	
	default:
		printf("Opcao invalida ");}	
	printf("Resultado: %.d", result);
}
