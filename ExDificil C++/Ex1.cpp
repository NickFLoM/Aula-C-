#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float cm, m, dc, mm;
	printf("Calculo com medidas \n");
	printf("Digite os centimetros \n");
	scanf("%f", &cm);
	m = cm/100;
	printf("O valor em metros � %.1f \n", m);
	dc = m/10;
	printf("O valor em decimetros � %.1f", dc);
	mm = cm*10;
	printf("O valor em milimetros � %.1f", m );
	
	return 0;
	
}
