#include <stdlib.h>
#include <stdio.h>
#include <math.h> /* Essa função inclui uma biblioteca de matemática, para o usa de raiz e potenciação*/



int main(int argc, char *argv[]) {
	double num1, num2, resultado; /* Double para uma variável de número quebrado, e int para inteiro*/
	int escolha = 0; /* a escolha se inicia em 0*/
	
	printf("Calculadora\n");
	printf("Escolha a operacao desejada: \n");
	printf("1 - Soma\n");
	printf("2 - Subtracao\n");
	printf("3 - Multipliicacao\n");
	printf("4 - Divisao\n");
	printf("5 - Potenciacao\n");
	printf("6 - Raiz\n");
	printf("7 - Sair\n"); /* Dando as opções de operações para o usuário*/

	while (escolha != 7) { /* Cria uma estrutura de repetição se a escolha for diferente da opção 7, que seria para encerrar o programa*/

		printf("Digite sua escolha: ");
		scanf("%d", &escolha); /* Lê a escolha do usuário*/

		
		if (escolha == 1){
			printf("Digite o primeiro numero: ");
			scanf("%lf", &num1);
			printf("Digite o segundo numero: ");
			scanf("%lf", &num2); /* Pede para o usuário que digite o primeiro e o segundo valor de sua escolha e os lê*/
			
			resultado = num1 + num2;
			printf("Resultado: %.2lf\n", resultado);
			/* Se a escola do usuário for soma, o resultado recebe a soma dos dois valores que o usuário escolheu, e escreve o resultado*/
		}
		else if (escolha == 2){
			printf("Digite o primeiro numero: ");
			scanf("%lf", &num1);
			printf("Digite o segundo numero: ");
			scanf("%lf", &num2);
			
			resultado = num1 - num2;
			printf("Resultado: %.2lf\n", resultado); /* Se a escola do usuário for subtração, o resultado recebe a subtrai dos dois valores que o usuário escolheu, e escreve o resultado*/
		}
		else if (escolha == 3){
			printf("Digite o primeiro numero: ");
			scanf("%lf", &num1);
			printf("Digite o segundo numero: ");
			scanf("%lf", &num2);
			
			resultado = num1 * num2;
			printf("Resultado: %.2lf\n", resultado); /* Se a escola do usuário for multiplicação, o resultado recebe a multiplicação dos dois valores que o usuário escolheu, e escreve o resultado*/
		}
		else if (escolha == 4){
			printf("Digite o primeiro numero: ");
			scanf("%lf", &num1);
			printf("Digite o segundo numero: ");
			scanf("%lf", &num2);
			if (num2 != 0){ /* Caso o segundo valor for diferente de zero, ele executa*/
				resultado = num1 / num2;
				printf("Resultado: %.2lf\n", resultado); /* Se a escola do usuário for divisão, o resultado recebe a divisão dos dois valores que o usuário escolheu, e escreve o resultado*/
			} else {
				printf("A divisao por zero nao e possivel.\n");
				/* Se o valor é igual a zero, ele exibe uma mensagem de erro*/

			}
		}
		else if (escolha == 5) {
            printf("Digite a base: ");
            scanf("%lf", &num1);
            printf("Digite o expoente: ");
            scanf("%lf", &num2);
            resultado = pow(num1, num2);
            printf("Resultado: %.2lf\n", resultado);
            /* Se a escola do usuário for potenciação, o sistema pede a base e o expoente, e escreve o resultado*/
	    }
	    else if (escolha == 6) {
            printf("Digite o numero para calcular a raiz quadrada: "); /* Pede ao usuário que digite um número para tirar a raiz quadrada*/
            scanf("%lf", &num1);
            if (num1 < 0) { /* Caso o número seja negativo, ele exibe uma mensagem de erro*/
                printf("Erro: Nao e possivel calcular a raiz quadrada de um numero negativo.\n");
            } else {
                resultado = sqrt(num1); /* Se o número for acima de zero, ele executa a raiz e exibe o resultado*/
                printf("Resultado: %.2lf\n", resultado);
            }
        }
	}
	
	printf("Programa encerrado"); /* Mensagem para mostrar o fim do programa*/
	return 0;
}