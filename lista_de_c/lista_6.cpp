/*6. Pergunte ao usuário qual o tamanho do quadrado que ele quer que seja desenhado, Ex: 5x5*/

#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(0, "Portuguese");

	int tamanho;

	int contador = 1;
	
	char caracter = 'X';

	printf("Digite o tamanho do quadrado:");
	scanf("%d", &tamanho);
	
	while (contador <= tamanho) {
		for (int i = 1; i <= tamanho; i++){
			printf("%c", caracter);
		}
		printf("\n");
		contador += 1;
}
}

