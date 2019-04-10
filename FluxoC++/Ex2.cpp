#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	int a, b, s;
	printf("Calculo de um perimetro \n");
	printf("Digite o valor de a \n");
	scanf("%d", &a);
	printf("Digite o valor de b \n");
	scanf("%d", &b);
	s = a+b;
	printf("A soma é %d", s);
	return 0;
}
