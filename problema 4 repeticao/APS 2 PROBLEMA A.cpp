#include <stdio.h>
#include <stdlib.h>
 
 
 
NumeroMaior(int x, int y, int z) {
 
	int maior1, maior2, maior3;
 
	if (x > y && x > z){
		maior1 = x;
		if ( y > z) {
			maior2 = y;
			maior3 = z;
		}
		else {
			maior2 = z;
			maior3 = y;
		}
	}
	else if ( y > x && y > z) {
		maior1 = y;
		if ( x > z) {
			maior2 = x;
			maior3 = z;
		}
		else {
			maior2 = z;
			maior3 = x;
		}	
	}
	else {
		maior1 = z;
		if ( x > y) {
			maior2 = x;
			maior3 = y;
		} 
		else {
			maior2 = y;
			maior3 = x;
		}
	}
 
	printf("ordem crescente: %d, %d, %d", maior3, maior2, maior1);
}
 
main () {
 
	int n1, n2, n3;
 
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite um numero: ");
	scanf("%d", &n2);
	printf("Digite um numero: ");
	scanf("%d", &n3);
 
	NumeroMaior(n1, n2, n3);
}
