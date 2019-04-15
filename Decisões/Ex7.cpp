#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
float alt, imc;
int s1, s2;
printf("digite sua altura \n");
scanf("%f",&alt);
printf("Digite s1 para masculino ou s2 para feminino \n ");
scanf("%d", &s1, &s2);
if (s1){
	imc= (72.7*alt)-58;
	printf("O seu peso ideal é  %f \n", imc );
	}
if (s2){
 	imc=(62.1*alt)-44.7;
	printf("O seu peso ideal é %f \n", imc);
}
system("PAUSE");
return 0;
}



