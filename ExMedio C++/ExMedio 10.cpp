#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float x, z, y, a;
	printf("Calculo de poupan�a \n");
	x = 500;
	printf("O valor da poupan�a �  %f \n", x);
	y = x+((x/100)*1);
	z = y+((y/100)*1);
	a = z+((z/100)*1);
	printf("O resultado da poupan�a %f", a);
	return 0;
	
}
