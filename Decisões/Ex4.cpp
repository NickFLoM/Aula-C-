#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
float n1, n2, me, ma ;
printf("digite o primeiro número: ");
scanf("%f",&n1);
printf("Digite o segundo número: ");
scanf("%f",&n2);
if (n1 < n2){
	printf("O %.1f é menor que o %.1f \n", n1, n2 );
	}
if(n2 < n1){
	printf("O %.1f menor que o %.1f \n ", n2, n1);
}
if(n1 == n2){
	printf("Os números  %.1f e %.1f são iguais \n ", n1 , n2);
}
system("PAUSE");
return 0;
}
