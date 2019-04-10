#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float a, p;
	printf("Calculo de um perimetro \n");
	printf("Digite o valor do lado \n");
	scanf("%f", &a);
	p = 4*a;
	printf("O perimetro é %.1f", p);
	return 0;
}
