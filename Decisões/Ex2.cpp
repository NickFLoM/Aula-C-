#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
int n1, r ;
printf("digite o número: ");
scanf("%d",&n1);
if (n1 % 2 == 0 ){
	printf("O número é par \n");
	}
	else{
		printf("O numero é impar \n");
	}
system("PAUSE");
return 0;
}
