#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float m, h, s;
	printf("Calculo minutos e horas \n");
	printf("Digite os segundos \n");
	scanf("%f", &s);
	m = s/60;
	printf("O valor em minutos é %.1f \n", m);
	h = m/10;
	printf("O valor em horas é %.1f", h);
	return 0;
	
}
