#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float r,v;
	printf("Calculo de uma esfera \n");
	printf("Digite o número do raio \n");
	scanf("%f", &r);
	v = 4*3.14*(r*r*r)/3;
	printf("O volume é %.1f", v);
	return 0;
	
}
