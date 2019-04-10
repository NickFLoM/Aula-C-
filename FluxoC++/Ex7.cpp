#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float c, k;
	printf("Calculo de temperatura \n");
	printf("Digite a temperatura em celsius \n");
	scanf("%f", &c);
	k = c + 273.15;
	printf("O valor em kelvin é %2.2f \n", k);
	printf("Tecle ENTER ou ESC para sair do DOS \n");
	return 0;
	
}
