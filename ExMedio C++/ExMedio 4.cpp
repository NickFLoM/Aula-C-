#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float b, h, rs;
	printf("CAlculo de área de triangulo \n");
	printf("Digite o valor da base \n");
	scanf("%f", &b);
	printf("Digite o valor da altura \n");
	scanf("%f", &h);
	rs = (b*h)/2;
	printf("O resultado da área é %.1f", rs);
	return 0;
	
}
