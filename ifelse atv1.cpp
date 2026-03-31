#include <stdio.h>
#include <locale.h>

int main(){
	/* Criar um programa em linguagem C que leia 2 números. 
	Caso o primeiro número lido seja maior ou igual ao segundo, 
	imprima na tela o primeiro número menos o segundo, caso contrário 
	mostre a soma dos dois números.*/
	
	setlocale(LC_ALL, "Portuguese");
	int num1, resultado, num2;
	
	printf("\nOlá! Por favor, digite o primeiro número: \n");
	scanf("%i", &num1);
	
	printf("\nOlá! Por favor, digite o segundo número: \n");
	scanf("%i", &num2);
	
	if(num1 <= num2){
		resultado = num1 - num2;
		printf("\n%i - %i = %i\n", num1, num2, resultado);
	} else {
		resultado = num1 + num2;
		printf("\n%i + %i = %i\n", num1, num2, resultado);
	}
	 
}