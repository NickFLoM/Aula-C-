#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float n1, n2, n3, n4, mf;
	char name [10];
	printf("\n Calculo média do aluno \n");
	printf("\n Digite seu nome \n");
	scanf("%s",&name);
	printf("\n Digite sua primeira nota\n");
	scanf("%f", &n1);
	printf("\n Digite sua secunda nota\n");
	scanf("%f", &n2);
	printf("\n Digite sua terceira nota\n");
	scanf("%f", &n3);
	printf("\n Digite sua quarta nota\n");
	scanf("%f", &n4);
	mf = (n1+n2+n3+n4)/4;
	printf("\n O aluno %s recebeu a nota final %.1f \n", name, mf );
	return 0;
	
	
}
