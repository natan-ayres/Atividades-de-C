#include <stdio.h>

int main(){

	int x = 15;
	float f = 456.78;
	char a = 'w';
	
	int * p_INT;
	float * p_FLOAT;
	char *p_CHAR;
	
	p_INT = &x;
	p_FLOAT = &f;
	p_CHAR = &a;
	
	printf("Endereço de x = %x\n", p_INT);
	printf("Endereço do ponteiro de x = %x\n", &p_INT);
	printf("Valor apontado por P_Int = %d\n", *p_INT);
	
	printf("---------------------------------\n");
	
	printf("Endereço de f = %f\n", p_FLOAT);
	printf("Endereço do ponteiro de f = %x\n", &p_FLOAT);
	printf("Valor apontado por P_Float = %f\n", *p_FLOAT);
	
	printf("---------------------------------\n");
	
	printf("Endereço de a = %a\n", p_CHAR);
	printf("Endereço do ponteiro de a = %a\n", &p_CHAR);
	printf("Valor apontado por P_Char = %c\n", *p_CHAR);
	
}