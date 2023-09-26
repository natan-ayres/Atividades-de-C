/*7. Ler 10 números a serem digitados pelo usuário e armazená-los em um vetor. 
a) Exibir a quantidade de vezes que o número 3 es	tá presente no vetor.
b) Pergunte ao usuário qual número ele quer pesquisar e diga quantas vezes este número 
estápresente no vetor.*/

#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(0, "Portuguese");
	
	int contador = 0;
	int i = 0;
	int numeros[9];
	int numero_procurado;
	
	while (i < 10){
		printf("Digite o %d número", i);
		scanf("%d", &numeros[i]);
		i++;
	}
	
	printf("Digite o número que você quer procurar: ");
	scanf("%d", &numero_procurado);
	
	i = 0;
	
	while (i < 10){
		if(numeros[i] == 3){
			contador++;
		}
		i++;
	}
	
	printf("O número 3 está presente %d vezes.\n", contador);
	
	i = 0;
	
	contador = 0;
	
	while (i < 10){
		if(numeros[i] == numero_procurado){
			contador++;
		}
		i++;
	}
	printf("O número procurado está presente %d vezes.",contador);	
}
