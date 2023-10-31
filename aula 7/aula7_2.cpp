#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int * pont_INT;
	char * pont_CHAR;
	float * pont_FLOAT;
	
	pont_INT = (int *)malloc(sizeof(int));
	pont_CHAR = (char *)malloc(sizeof(char));
	pont_FLOAT = (float *)malloc(sizeof(float));
	
	*pont_INT = 123456;
	*pont_CHAR = 'W';
	*pont_FLOAT = 555.777;
	
	printf("Endereco de pont_INT e = %x\n", &pont_INT);
	printf("Endereco da area alocada pelo malloc = %x\n", pont_INT);
	printf("-----------------------------------------------------\n");
	printf("Endereco de pont_CHAR e = %x\n", &pont_CHAR);
	printf("Endereco da area alocada pelo malloc = %x\n", pont_CHAR);
	printf("-----------------------------------------------------\n");
	printf("Endereco de pont_FLOAT e = %x\n", &pont_FLOAT);
	printf("Endereco da area alocada pelo malloc = %x\n", pont_FLOAT);
}