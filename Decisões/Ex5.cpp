#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
int n1, n2, r ;
printf("digite o maior n�mero: ");
scanf("%d",&n1);
printf("Digite o menor n�mero: ");
scanf("%d",&n2);
if (n1 > n2){
	r = n1 - n2;
	printf("A diferenca �  %d \n", r );
	}
if (n2 > n1){
	r = n2 - n1;
	printf("A diferen�a � %d \n", r);
}
system("PAUSE");
return 0;
}



