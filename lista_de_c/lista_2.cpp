/*2. Ler um n�mero e dizer se ele est� contido no intervalo entre 10 e 15, onde 10 e 15 
tamb�m pertencem ao intervalo */

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(0, "Portuguese");
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num <= 15 && num >= 10){
			printf("O n�mero digitado esta no intervalo");
	}
	else{
		printf("O n�mero digitado n�o esta no intervalo");
	}
}
	
