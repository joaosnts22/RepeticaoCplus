#include<stdio.h>
#include<stdlib.h>
 
 
main (){
 
	int i, j, n;
 
	printf("Numero: ");
	scanf("%d", &n);
 
 
	for ( i = n; i > 0; i--){
		for ( j = 1; j <= n; j++){
			printf("%d ", j);	
		}
	printf("\n");
	n -= 1;
	}
}
