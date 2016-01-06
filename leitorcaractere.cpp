#include <stdio.h>
#include <stdlib.h>

int caracter (char c, char s []){
	if (s[0]=='\0')
		return 0;
	if (s[0]==c)
		return (1+caracter(c,++s));
	return caracter(c,++s);
}

main(){
	char s[30],c;
	int t;
	printf("Busque em string\n\n");
	printf("\nDigite a string:");
	gets(s);
}