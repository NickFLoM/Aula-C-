#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 19");
	int n1, n2, res;
	printf("\n Calculo para soma de dois n�meros.\n\n");
	printf("\n Digite o primeiro n�mero:\t");
	scanf("%d",&n1);
	printf("\n Digite o segundo n�mero:\t");
	scanf("%d", &n2);
	res = n1+n2;
	printf("\n O resultado da soma � %d", res);
	return 0;

}
