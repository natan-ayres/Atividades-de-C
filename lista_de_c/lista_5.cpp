/*5. Leia dois valores, e exiba sua soma. Em seguida pergunte ao usuário: “Novo Cálculo(S/N)?”.
Deve-se ler a resposta e se a resposta for ‘S’ (sim), deve-se repetir todos oscomandos (instruções) 
novamente, mas se for qualquer outra resposta, algoritmo deve ser finalizado escrevendo a mensagem 
“Fim dos Cálculos”. Escolha a opção mais adequada de comando de loop para resolver este problema.*/

#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(0, "Portuguese");
	
	int num1, num2;
	
	char resposta = 'S';
	
	while (resposta == 'S' || resposta == 's'){
	
		printf("Digite o primeiro número: ");
		scanf("%d", &num1);
	
		printf("Digite o segundo número: ");
		scanf("%d", &num2);
	
		int soma = (num1 + num2);
		
		printf("A soma dos dois números é: %d\n",soma);
		
		printf("Novo cálculo? S/N : ");
		getchar();
		scanf("%c",&resposta);
		
		if (resposta == 'N' || resposta == 'n') {
			printf("Fim dos cálculos");
			break;
			}
		}
	}
