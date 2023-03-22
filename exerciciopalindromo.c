#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/* Uma palavra é palíndromo se ela não se altera quando lida da direita para esquerda. Por exemplo, RAIAR é palíndromo. Escreva um programa que verifique se uma palavra dada é palíndromo. */
int main()
{
    setlocale(LC_ALL, "Portuguese");
	char palavra[6];
	int i;
	printf("/n Digite a palavra que deseja checar: ");
	scanf("%s", palavra);
	for (i=0;i<5;i++) {
		if (palavra[i]!=palavra[4-i]){
			printf("A palavra %s não  é palíndroma.", palavra);
			return 0;
		}
	}
	printf("A palavra %s é palíndroma.", palavra);

	system("pause");
	return 0;
}
