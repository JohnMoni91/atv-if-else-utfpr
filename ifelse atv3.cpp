#include <stdio.h>
#include <locale.h>

int main(){
	/*Faça um programa em linguagem C que peça um número inteiro. 
	Em seguida, o programa deve apresentar uma mensagem conforme a 
	seguinte regra: 
	a. Se o valor for positivo: “Valor positivo”; 
	b. Se o valor for negativo: “Valor negativo”; 
	c. Se não for nenhuma das opções (se for 0): “Valor neutro”.*/
	
    setlocale(LC_ALL, "Portuguese");
	int numero;
	
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("Valor positivo\n");
    }
    else if (numero < 0) {
        printf("Valor negativo\n");
    }
    else {
        printf("Valor neutro\n");
    }
}