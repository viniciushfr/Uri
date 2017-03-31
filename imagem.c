#include <stdio.h>

int main(void)
{
	char url[]="char.txt";
	char ch;
	FILE *arq;

	ch=getchar();

	arq = fopen(url, "w");
	if(arq == NULL)
		printf("Erro, nao foi possivel abrir o arquivo\n");
	else{
		fputc(ch, arq);
		fclose(arq);
	}

	return 0;
}
