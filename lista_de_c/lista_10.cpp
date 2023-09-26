/*10. Fazer um programa que codifica uma string pelo m�todo ZENIT-POLARZ E N I TP O L A ROu seja, onde aparece um 'Z' no string de entrada, aparecer� um 'P' na sa�da;
 e,semelhantemente, onde aparece um 'P' no string de entrada, aparecer� um 'Z' na sa�da. Istodeve ocorrer para todos os pares em ZENIT-POLAR, mai�sculas e min�sculas.
 As outras letras n�o s�o alteradas.Por exemplo, o string "Parabens a voce" � codificado para "Zitibols i veco". Ao seaplicar duas vezes a transforma��o, obt�m-se 
o mesmo string, ou seja, a codifica��o dele.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char texto[100];
    char textocodificado[100] = "";
    char palavra[100];
    int i = 0;
    int indice = 0;

    printf("Digite um texto: ");
    scanf(" %[^\n]", texto);

    while (texto[i] != '\0') {
        int j = 0;
        while (texto[i] != ' ' && texto[i] != '\0'){
            if (texto[i] == 'Z'){
                palavra[j] = 'P';
            }
            else if (texto[i] == 'z'){
                palavra[j] = 'p';
            }
            else if (texto[i] == 'E'){
                palavra[j] = 'O';
            }
            else if (texto[i] == 'e'){
                palavra[j] = 'o';
            }
            else if (texto[i] == 'N'){
                palavra[j] = 'L';
            }
            else if (texto[i] == 'n'){
                palavra[j] = 'l';
            }
            else if (texto[i] == 'I'){
                palavra[j] = 'A';
            }
            else if (texto[i] == 'i'){
                palavra[j] = 'a';
            }
            else if (texto[i] == 'T'){
                palavra[j] = 'R';
            }
            else if (texto[i] == 't'){
                palavra[j] = 'r';
            }
            else if (texto[i] == 'P'){
                palavra[j] = 'Z';
            }
            else if (texto[i] == 'p'){
                palavra[j] = 'z';
            }
            else if (texto[i] == 'O'){
                palavra[j] = 'E';
            }
            else if (texto[i] == 'o'){
                palavra[j] = 'e';
            }
            else if (texto[i] == 'L'){
                palavra[j] = 'N';
            }
            else if (texto[i] == 'l'){
                palavra[j] = 'n';
            }
            else if (texto[i] == 'A'){
                palavra[j] = 'I';
            }
            else if (texto[i] == 'a'){
                palavra[j] = 'i';
            }
            else if (texto[i] == 'R'){
                palavra[j] = 'T';
            }
            else if (texto[i] == 'r'){
                palavra[j] = 't';
            }
            else{
                palavra[j] = texto[i];
            }
            i++;
            j++;
        }
        palavra[j] = '\0';

        strcat(textocodificado, palavra);

        if (texto[i] == ' ') {
            strcat(textocodificado, " ");
            i++;
        }
    }

    printf("Texto codificado: %s\n", textocodificado);
}

