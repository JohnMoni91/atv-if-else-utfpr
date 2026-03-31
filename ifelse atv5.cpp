#include <stdio.h>
#include <locale.h>

int main() {
	/*Faça uma programa em linguagem C que leia 3 valores ladoA, ladoB e 
	ladoC e verifique se esses valores representam os lados de um 
	triângulo. Para que seja um triângulo, todos os lados devem ser 
	maiores que zero e nenhum lado deve ser igual ou maior que a soma 
	dos outros dois lados. Ao terminar precisa informar também qual o 
	tipo do triângulo:
	- Escaleno: todos os lados diferentes.
	- Isósceles: 2 lados iguais.
	- Equilátero: todos os lados iguais.
	Casos de teste:
	a) Para valores: 5, 5 e 5, Valores representam um triângulo equilátero!
	b) Para valores: 3, 3 e 4, Valores representam um triângulo isóceles!
	c) Para valores: 5, 9 e 5, Valores representam um triângulo isóceles!
	d) Para valores: 1, 2 e 3, Valores NÃO representam os lados de um 
	triângulo!
	e) Para valores: 8, 9 e 12, Valores representam um triângulo escaleno!*/
	
	setlocale(LC_ALL, "Portuguese");
    float ladoA, ladoB, ladoC;

    printf("Digite o valor do lado A: ");
    scanf("%f", &ladoA);
    printf("Digite o valor do lado B: ");
    scanf("%f", &ladoB);
    printf("Digite o valor do lado C: ");
    scanf("%f", &ladoC);

    if ((ladoA < ladoB + ladoC) && (ladoB < ladoA + ladoC) && (ladoC < ladoA + ladoB)) {
        
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("Valores representam um triângulo equilatero!\n");
        } 
        else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            printf("Valores representam um triângulo isosceles!\n");
        } 
        else {
            printf("Valores representam um triângulo escaleno!\n");
        }
    } 
    else {
        printf("Valores não representam os lados de um triângulo!\n");
    }
}