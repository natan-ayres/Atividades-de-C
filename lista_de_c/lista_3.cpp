/*3. Escreva um algoritmo que leia 3 n�meros e diga qual � o menor entre os tr�s.*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(0, "Portuguese");
	
	int num, num2, num3;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	printf("Digite um segundo n�mero: ");
	scanf("%d", &num2);
	
	printf("Digite um terceiro n�mero: ");
	scanf("%d", &num3);
	
	if (num > num2 && num > num3){
		printf("O maior n�mero entre %d, %d e %d � %d\n", num, num2, num3, num);
	}
	else if(num2 > num && num2 > num3){
		printf("O maior n�mero entre %d, %d e %d � %d\n", num, num2, num3, num2);
	}
	else if(num3 > num && num3 > num2){
		printf("O maior n�mero entre %d, %d e %d � %d\n", num, num2, num3, num3);
	}
	else if(num == num2 && num > num3){
		printf("N�o existe maior n�mero, visto que %d e %d empataram\n", num, num2);
	}
	else if(num2 == num3 && num2 > num){
		printf("N�o existe maior n�mero, visto que %d e %d empataram\n", num2, num3);
	}
	else if(num == num3 && num > num2){
		printf("N�o existe maior n�mero, visto que %d e %d empataram\n", num, num3);
	}
	else{
		printf("Todos os n�meros empataram, sendo eles %d, %d, %d\n", num, num2, num3);
	}
	
}
