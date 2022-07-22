#include <stdio.h>
#include <stdlib.h>
 
 
NumerosPares(int x) {
 
 
	int i, somaPares = 0;
	printf("Soma dos pares:\n");
	for ( i = 0; i < x; i++) {
 
		if (i % 2 == 0)
			if ( i >= (x-2)){
				printf("%d = ", i);
				somaPares += i;
			}
			else {
				printf("%d - ", i);
				somaPares += i;	
			}
	}
	printf("%d \n\n", somaPares);
}
 
NumerosImpares(int x) {
 
 
	int i, somaImpares = 0;
	printf("Soma dos impares:\n");
	for ( i = 0; i < x; i++) {
 
		if (i % 2 == 1)
			if ( i >= (x-2)){
				printf("%d = ", i);
				somaImpares += i;
			}
			else {
				printf("%d - ", i);
				somaImpares += i;	
			}
	}
 
	printf("%d \n\n", somaImpares);
}
main () {
 
	int n;
 
	do 
	{
	printf("\nDigite um numero negativo para encerrar. ");
	printf("\nDigite um numero: ");
	scanf("%d", &n);
	system("cls");
	NumerosPares(n);
	NumerosImpares(n);
	} while ( n > 0); 
 
	system("cls");
	printf("PROGRAMA ENCERRADO");
 
 
 
}
