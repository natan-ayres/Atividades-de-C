#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 2;
	int * vet;
	while(i) {
		vet = (int *) malloc(sizeof(int)*10240*i);
		printf("%llu\t%x\n", sizeof(int)*10240*i, vet);
		i *= i;
		if (!vet)
			i = 0;
			//else
				//free(vet);
	}
}