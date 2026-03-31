#include <stdio.h>
#include <locale.h>

int main(){
	/*Faça um programa em linguagem C que peça um número inteiro e 
	apresente a mensagem “é par” ou “é ímpar”.
	Dica: use o operador % (resto da divisão de inteiros). 
	Por exemplo: 5 % 2 retornará o resto da divisão de 5 por 2. Então, 
	5 % 2 = 1 (porque 5 dividido por 2 é igual a 2 e resta 1). Por outro 
	lado, 6 % 2 = 0, porque 6 dividido por 2 é igual a 3 e resta 0*/
	
	setlocale(LC_ALL, "Portuguese");
	int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("eh par\n");
    } else {
        printf("eh impar\n");
    }
}