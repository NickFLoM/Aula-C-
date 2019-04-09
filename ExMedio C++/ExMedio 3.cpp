#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float b, h, rs;
	printf("Calculo de área de retangulo");
	printf("Digite o valor da base \n");
	scanf("%f", &b);
	printf("Digite o valor da altura \n");
	scanf("%f", &h);
	rs = (b*h);
	printf("O resultado da área é %f", rs);
	return 0;
	
}
