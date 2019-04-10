#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	int a, q;
	printf("Calculo de um perimetro \n");
	printf("Digite o valor do quadradro \n");
	scanf("%d", &a);
	q = a*a;
	printf("O valor do quadrado é %d", q);
	return 0;
}
