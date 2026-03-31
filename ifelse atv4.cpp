#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	/*Faça um programa em linguagem C que apresente um menu e pergunte ao
	usuário se ele deseja calcular:
	1) a área de um triângulo (base vezes altura dividido por 2) 
	- receba base e altura
	2) a área de um círculo (pi multiplicado pelo raio ao quadrado) 
	- receba o raio
	3) a área de um cubo (6 vezes a área do quadrado) - receba o lado do 
	quadrado
	Depois, solicitar os dados necessários para calcular a área escolhida,
	e mostrar o resultado na tela.*/
	
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    float base, altura, raio, lado, area;
    float PI = 3.14;
    	
    	printf("\n---Menu---\n");
    	printf("\n1- calcular área do triângulo\n");
    	printf("\n2- calcular área do circulo\n");
    	printf("\n3- calcular área do cubo\n");
    	printf("\n4- sair\n");
    	scanf("%i", &opcao);
    	
    if (opcao == 1) {
        printf("\n--- Área do Triângulo ---\n");
        printf("Digite a base: ");
        scanf("%f", &base);
        printf("Digite a altura: ");
        scanf("%f", &altura);
        area = (base * altura) / 2.0;
        printf("A área do triângulo e: %.2f\n", area);
    }
    else if (opcao == 2) {
        printf("\n--- Área do Circulo ---\n");
        printf("Digite o raio: ");
        scanf("%f", &raio);
        area = PI * pow(raio, 2);
        printf("A área do circulo e: %.2f\n", area);
    }
    else if (opcao == 3) {
        printf("\n--- Área do Cubo ---\n");
        printf("Digite o lado do quadrado: ");
        scanf("%f", &lado);
        area = 6.0 * pow(lado, 2);
        printf("A área do cubo e: %.2f\n", area);
    }
    else {
        printf("\nOpção invalida!\n");
    }
}