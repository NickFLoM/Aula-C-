#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	int n1, n2, n3, ida, idb;
	printf("Calculo de idade \n");
	printf("Digite ano que nasceu \n");
	scanf("%d", &n1);
	printf("Digite o ano atual \n");
	scanf("%d", &n2);
	ida = (n2-n1);
	idb = (2050-n1);
	printf("Sua idade é %d, sua idade em 2050 é %d", ida, idb);
	return 0;
	
}
