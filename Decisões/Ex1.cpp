#include <stdio.h>
#include <stdlib.h>

int main( ) {
float n1,n2,n3,n4,md;
printf("digite a primeira nota: ");
scanf("%f",&n1);
printf("digite a segunda nota: ");
scanf("%f",&n2);
printf("digite a terceira nota: ");
scanf("%f",&n3);
printf("digite a quarta nota: ");
scanf("%f",&n4);
md=(n1+n2+n3+n4)/4;
if (md>=7){
	printf("aluno alcancou a media: %.2f \n", md);
	printf ("aprovado\n");
	}
	else {
	printf("aluno nao alcancou a media: %.2f \n", md);
	printf ("reprovado\n");
	    }
system("PAUSE");
return 0;
}
