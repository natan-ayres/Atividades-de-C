/*2. Ler um número e dizer se ele está contido no intervalo entre 10 e 15, onde 10 e 15 
também pertencem ao intervalo */

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(0, "Portuguese");
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num <= 15 && num >= 10){
			printf("O número digitado esta no intervalo");
	}
	else{
		printf("O número digitado não esta no intervalo");
	}
}
	
