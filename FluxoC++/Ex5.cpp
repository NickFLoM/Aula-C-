#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float a, b, m;
	printf("Calculo de média \n");
	printf("Digite o valor de a \n");
	scanf("%f", &a);
	printf("Digite o valor de b \n");
	scanf("%f", &b);
	m = (a+b)/2;
	printf("A média dos valores é %.1f", m);
	return 0;
}
