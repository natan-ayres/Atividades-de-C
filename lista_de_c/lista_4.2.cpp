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
	
	switch (idade)
	{
		case 0:
			printf("Nadador de idade %d não se encaixa em nenhuma categoria", idade);
			break;
		case 1:
			printf("Nadador de idade %d não se encaixa em nenhuma categoria", idade);
			break;
		case 2:
			printf("Nadador de idade %d não se encaixa em nenhuma categoria", idade);
			break;
		case 3:
			printf("Nadador de idade %d não se encaixa em nenhuma categoria", idade);
			break;
		case 4:
			printf("Nadador de idade %d não se encaixa em nenhuma categoria", idade);
			break;
		case 5:
			printf("Nadador de idade %d é da categoria Infantil A", idade);
			break;
		case 6:
			printf("Nadador de idade %d é da categoria Infantil A", idade);
			break;
		case 7:
			printf("Nadador de idade %d é da categoria Infantil A", idade);
			break;
		case 8:
			printf("Nadador de idade %d é da categoria Infantil B", idade);
			break;
		case 9:
			printf("Nadador de idade %d é da categoria Infantil B", idade);
			break;
		case 10:
			printf("Nadador de idade %d é da categoria Infantil B", idade);
			break;
		case 11:
			printf("Nadador de idade %d é da categoria Juvenil A", idade);
			break;
		case 12:
			printf("Nadador de idade %d é da categoria Juvenil A", idade);
			break;
		case 13:
			printf("Nadador de idade %d é da categoria Juvenil A", idade);
			break;
		case 14:
			printf("Nadador de idade %d é da categoria Juvenil B", idade);
			break;
		case 15:
			printf("Nadador de idade %d é da categoria Juvenil B", idade);
			break;
		case 16:
			printf("Nadador de idade %d é da categoria Juvenil B", idade);
			break;
		case 17:
			printf("Nadador de idade %d é da categoria Juvenil B", idade);
			break;
	}
}
