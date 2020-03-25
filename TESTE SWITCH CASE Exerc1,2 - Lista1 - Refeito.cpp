// DECLARAÇÃO DE BIBLIOTECA
#include<stdio.h>

// DECLARAÇÃO DE MAIN
int main(){
	int opc1, opc2;
	float total_a_pagar, montante_final, qtd_parc;
	float prof_poco, cap_agua, vol;
	
//	MENU DE OPÇÕES
	printf(".............................................\n");
	printf("|                                           |\n");
	printf("|           MENU DE OPCOES                  |\n");
	printf("| 1 - simular parcelas sem juros            |\n");
	printf("| 2 - calcular profundidade de um poco      |\n");
	printf("|                                           |\n");
	printf(".............................................\n");
	
	printf("Escolha uma das opcoes acima: \n");
	scanf("%d %d", &opc1, &opc2);

//	MENU DE SWITCH CASE
	switch (opc1) {
		case 1:
			printf("\nQual o total a pagar? ");
			scanf("%f", &total_a_pagar);
			printf("\nQual e a quantidade de parcelas? ");
			scanf("%f", &qtd_parc);
			montante_final = total_a_pagar / qtd_parc;
			printf("\nO Valor de cada parcela e de: RS %.2f", montante_final); 
			break; 
			default:
				printf("\nVoce digitou uma opcao invalida! ");
				break;
			}

//	MENU DE IF ELSE
	switch (opc2) {
		case 1:
			printf("Qual a capacidade de agua pretendida? ");
			scanf("%f", &cap_agua);
			vol = cap_agua / 1000;
			prof_poco = vol / (3.14 * 0.25);
			printf("\nA profundidade do poco sera de: %.2f", prof_poco);
			break;
				default:
				printf("\nVoce digitou uma opcao invalida! ");
				break;
			}
			
// return 0;
   return 0;
}
