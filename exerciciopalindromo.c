#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/* Uma palavra � pal�ndromo se ela n�o se altera quando lida da direita para esquerda. Por exemplo, RAIAR � pal�ndromo. Escreva um programa que verifique se uma palavra dada � pal�ndromo. */
int main()
{
    setlocale(LC_ALL, "Portuguese");
	char palavra[6];
	int i;
	printf("/n Digite a palavra que deseja checar: ");
	scanf("%s", palavra);
	for (i=0;i<5;i++) {
		if (palavra[i]!=palavra[4-i]){
			printf("A palavra %s n�o  � pal�ndroma.", palavra);
			return 0;
		}
	}
	printf("A palavra %s � pal�ndroma.", palavra);

	system("pause");
	return 0;
}
