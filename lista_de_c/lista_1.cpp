/*1. Pedir ao usuário para digitar um caractere, e em seguida exiba esse caractere na tela.
a) exiba como caractere (%c).
b) exiba como inteiro (%d).
c) exiba como hexadecimal (%x).*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(0, "Portuguese");
	
	char caractere;
	
	printf("Digite um caractere: ");
	scanf("%c", &caractere);
	getchar();
	
	printf("O caractere digitado é %c\n",caractere); //a
	printf("O caractere digitado em inteiro é: %d\n", caractere); //b
    printf("O caractere digitado em hexadecimal é: %x\n", caractere); //c
	
}
