#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float r, h, al, ab, at;
	printf("Calculo de uma esfera \n");
	printf("Digite o número do raio \n");
	scanf("%f", &r);
	printf("Digite a altura \n");
	scanf("%f", &h);
	ab = 3.14*pow(r,2);
	al = 2*3.14*r*h;
	at = 2*ab+al;
	printf("A área da lata é %f ", at);
	return 0;
	
}
