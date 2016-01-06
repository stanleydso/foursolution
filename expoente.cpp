#include <stdio.h>
#include <stdlib.h>

double expoente (int x, int y){
	if (y==0)
		return 1;
	return expoente (x,y-1)*x;
}
main(){
	int x,y;
	printf("Digite o valor da base x: ");
	scanf("%d",&x);
	printf("Digite o valor do expoente y: ");
	scanf("%d",&y);
	double r=expoente(x, y);
	printf("o valor de %d elevado a %d e igual a %.2f", x,y,r);
}