#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 59");
	float a, b, c, x1, x2, del, ba1, ba2;
	printf("Calculo Eq. de 2� Grau \n");
	printf("Digite o valor de a \n");
	scanf("%f", &a);
	printf("Digite o valor de b \n");
	scanf("%f", &b);
	printf("Digite o valor de c \n");
	scanf("%f", &c);
	del = pow(b,2)-4*a*c;
if(del > 0 ){
	ba1 =  (-b+sqrt(del))/2*a;
	x1 = ba1;
	ba2 = (-b-sqrt(del))/2*a;
	x2 = ba2;
	printf("O valores s�o %.1f e o outro � %.1f", x1, x2);
}
else{
	printf("A conta n�o dara certo \n ");
}

	system("PAUSE");
	return 0;
}

