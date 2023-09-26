/*8. Gere uma matriz 3x4 de inteiros, e peça para o usúario do programa preenchê-la. Após preenchida.
a) Informe qual foi o maior número encontrado na matriz.
b) Informe qual foi o menor número encontrado na matriz.*/

#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(0, "Portuguese");
	
	int i = 0;
	
	int lista[11];
	
	int maior, menor;
	
	int contador = 0;
	
	while (contador < 12){
		printf("Digite o número: ");
		scanf("%d", &lista[i]);
		i++;
		contador++;
		}
		
	int matriz[3][4] = {{lista[0], lista[1], lista[2], lista[3]},
						{lista[4], lista[5], lista[6], lista[7]},
						{lista[8], lista[9], lista[10], lista[11]}};
						
	printf("Matriz:\n");
    for (i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
	}
	
	    maior = lista[0];
    menor = lista[0];

    contador = 1; 
    while (contador < 12) {
        if (lista[contador] > maior) {
            maior = lista[contador];
        }
        if (lista[contador] < menor) {
            menor = lista[contador];
        }
        contador++;
    }

    printf("O maior número é %d\n", maior);
    printf("O menor número é %d\n", menor);

}

