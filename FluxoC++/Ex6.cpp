#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float p, a, imc;
	printf("Calculo de imc \n");
	printf("Digite o seu peso \n");
	scanf("%f", &p);
	printf("Digite sua altura \n");
	scanf("%f", &a);
	imc = p/pow(a,2);
	printf("Seu imc é igual a %.2f \n",  imc);
	printf("Tecle enter para sair do DOS\n");
	return 0;
}
