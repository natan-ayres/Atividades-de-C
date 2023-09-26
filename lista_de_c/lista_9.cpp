/*9. Algoritmo para ler um nome completo, com espa�os e acentua��o (aten��o para o formatopassado para o scanf()). Em seguida exiba o nome de tr�s formas diferentes:
a) texto normal, utilizando a m�scara de formata��o string (%s).
b) exiba cada uma das palavras do nome em linhas diferentes � use o espa�o para separar aspalavras*/

#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(0, "Portuguese");
	
	char nomecompleto[100];
	
	printf("Digite o nome completo: ");
	scanf(" %[^\n]", &nomecompleto);
	
	printf("O nome completo sem quebra de linhas �:\n%s\n", nomecompleto);
	
	printf("O nome separado por quebra de linhas �: \n");
	
	char palavra[100];
    int i = 0;
    while (nomecompleto[i] != '\0') {
        int j = 0;
        while (nomecompleto[i] != ' ' && nomecompleto[i] != '\0') {
            palavra[j] = nomecompleto[i];
            i++;
            j++;
        }
        palavra[j] = '\0';
        printf("%s\n", palavra);
        if (nomecompleto[i] == ' ') {
            i++; 
        }
    }
}

