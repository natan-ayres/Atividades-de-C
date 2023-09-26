/*3. Escreva um algoritmo que leia 3 números e diga qual é o menor entre os três.*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(0, "Portuguese");
	
	int num, num2, num3;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	printf("Digite um segundo número: ");
	scanf("%d", &num2);
	
	printf("Digite um terceiro número: ");
	scanf("%d", &num3);
	
	if (num > num2 && num > num3){
		printf("O maior número entre %d, %d e %d é %d\n", num, num2, num3, num);
	}
	else if(num2 > num && num2 > num3){
		printf("O maior número entre %d, %d e %d é %d\n", num, num2, num3, num2);
	}
	else if(num3 > num && num3 > num2){
		printf("O maior número entre %d, %d e %d é %d\n", num, num2, num3, num3);
	}
	else if(num == num2 && num > num3){
		printf("Não existe maior número, visto que %d e %d empataram\n", num, num2);
	}
	else if(num2 == num3 && num2 > num){
		printf("Não existe maior número, visto que %d e %d empataram\n", num2, num3);
	}
	else if(num == num3 && num > num2){
		printf("Não existe maior número, visto que %d e %d empataram\n", num, num3);
	}
	else{
		printf("Todos os números empataram, sendo eles %d, %d, %d\n", num, num2, num3);
	}
	
}
