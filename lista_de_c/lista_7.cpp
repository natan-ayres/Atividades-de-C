/*7. Ler 10 n�meros a serem digitados pelo usu�rio e armazen�-los em um vetor. 
a) Exibir a quantidade de vezes que o n�mero 3 es	t� presente no vetor.
b) Pergunte ao usu�rio qual n�mero ele quer pesquisar e diga quantas vezes este n�mero 
est�presente no vetor.*/

#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(0, "Portuguese");
	
	int contador = 0;
	int i = 0;
	int numeros[9];
	int numero_procurado;
	
	while (i < 10){
		printf("Digite o %d n�mero", i);
		scanf("%d", &numeros[i]);
		i++;
	}
	
	printf("Digite o n�mero que voc� quer procurar: ");
	scanf("%d", &numero_procurado);
	
	i = 0;
	
	while (i < 10){
		if(numeros[i] == 3){
			contador++;
		}
		i++;
	}
	
	printf("O n�mero 3 est� presente %d vezes.\n", contador);
	
	i = 0;
	
	contador = 0;
	
	while (i < 10){
		if(numeros[i] == numero_procurado){
			contador++;
		}
		i++;
	}
	printf("O n�mero procurado est� presente %d vezes.",contador);	
}
