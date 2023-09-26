/*4. Leia o ano de nascimento de um nadador, calcule sua idade, e classifique-o em uma das categorias:
Infantil A --- de 5 a 7 anos
Infantil B --- de 8 a 10 anos
Juvenil A --- de 11 a 13 anos 
Juvenil B --- de 14 a 17 anos 
Sênior --- maiores de 17 ano
(4.1 é feito com IF/ELSE, 4.2 é feito com Switch Case)*/


#include <stdio.h>
#include <locale.h>


int main(){
	
	const int AnoAtual = 2023;
	
	setlocale(0, "Portuguese");
	
	int ano_nascimento, idade;
	
	printf("Digite o ano de nascimento: ");
	scanf("%d", &ano_nascimento);
	
	idade = (AnoAtual - ano_nascimento);
	
	if (idade >= 5 && idade <= 7){
		printf("Nadador de idade %d é da categoria Infantil A", idade);
	}
	else if (idade >= 8 && idade <= 10){
		printf("Nadador de idade %d é da categoria Infantil B", idade);
	}
	else if (idade >= 11 && idade <= 13){
		printf("Nadador de idade %d é da categoria Juvenil A", idade);
	}
	else if (idade >= 14 && idade <= 17){
		printf("Nadador de idade %d é da categoria Juvenil B", idade);
	}
	else if (idade > 17){
		printf("Nadador de idade %d é da categoria Sênior", idade);
	}
	else{
		printf("Você é muito novo");
	}
}
