//DECLARAÇÃO DE BIBLIOTECA
#include<stdio.h>

//DECLARAÇÃO DE MAIN
int main(){
	//DECLARAÇÕES DE VARIAVEIS
	int num1, num2, port_and, port_nand, port_or, port_nor, port_xor;
	
	//ENTRADA DE DADOS
	printf("Digite dois numeros binarios 0 ou 1: \n");
	scanf("%d %d", &num1, &num2);
	
	//PROCESSAMENTO CONDICIONAL
switch(num1){
    case 0:
        switch(num2){
            case 0:
                // num1 = 0 e num2 = 0
                port_and = 0;
				port_nand = not port_and;
				port_or = 0;
				port_nor = not port_or;
				port_xor = 0;
                break;
                
            case 1:
                // num1 = 0 e num2 = 1
                port_and = 0;
				port_nand = not port_and;
				port_or = 1;
				port_nor = not port_or;
				port_xor = 1;
                break;
        }
        break;
        
    case 1:
        switch(num2){
            case 0:
                // num1 = 0 e num2 = 0
                port_and = 0;
				port_nand = not port_and;
				port_or = 1;
				port_nor = not port_or;
				port_xor = 1;
                break;
                
            case 1:
                // num1 = 0 e num2 = 1
                port_and = 1;
				port_nand = not port_and;
				port_or = 1;
				port_nor = not port_or;
				port_xor = 0;

                break;
        }
        break;
}
return 0;
}
