#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
int n1, r ;
printf("digite o n�mero: ");
scanf("%d",&n1);
if (n1 % 2 == 0 ){
	printf("O n�mero � par \n");
	}
	else{
		printf("O numero � impar \n");
	}
system("PAUSE");
return 0;
}
