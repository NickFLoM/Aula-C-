#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
float n1, n2, r ;
printf("digite o primeiro número: ");
scanf("%f",&n1);
printf("Digite o segundo número: ");
scanf("%f",&n2);
r = n1 +n2;
if (r > 25 ){
	printf("A soma dos números é maior que 25 \n");
	}
system("PAUSE");
return 0;
}
