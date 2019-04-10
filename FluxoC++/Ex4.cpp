#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float r, a;
	printf("Calculo de área \n");
	printf("Digite o valor do raio \n");
	scanf("%f", &r);
	a = 3.14*(r*r);
	printf("A área é %.1f", a);
	return 0;
}
