#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float h, ht, vl, vb, vd;
	int d;
	printf("Calculo de Valor Bruto e Liquido \n");
	printf("Digite o valor de hora \n");
	scanf("%f", &h);
	printf("Digite as horas trabalhadas \n");
	scanf("%f", &ht);
	vb = h*ht*30;
	printf("O seu valor bruto é %.1f \n", vb);
	printf("Para seu Valor Liquido \n");
	printf("Digite o número de dependentes \n");
	scanf("%d", &d);
	vd = d*300;
	vl = vb+vd;
	printf("Seu Valor Liquido é %.1f", vl);
	
	return 0;
	
}
