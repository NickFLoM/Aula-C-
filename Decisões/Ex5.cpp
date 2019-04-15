#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
int n1, n2, r ;
printf("digite o maior número: ");
scanf("%d",&n1);
printf("Digite o menor número: ");
scanf("%d",&n2);
if (n1 > n2){
	r = n1 - n2;
	printf("A diferenca é  %d \n", r );
	}
if (n2 > n1){
	r = n2 - n1;
	printf("A diferença é %d \n", r);
}
system("PAUSE");
return 0;
}



