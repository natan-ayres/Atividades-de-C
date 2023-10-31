#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tam, i, j; 
	
	for(j = 0; j < 3; j++) {
		printf("Digite o tamanho do seu vetor:\n");
		scanf("%d", &tam);
		
		int vet[tam];
		printf("%x\n", &vet);
		for (i=0 ; i<tam ; i++) {
			printf("Digite o numero %d\n", i+1);
			scanf("%d", &vet[i]);
		}
	}
}