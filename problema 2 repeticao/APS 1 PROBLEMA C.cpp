#include<stdio.h>
#include<stdlib.h>
 
 
main (){
	int i,n;
 
	printf("numero: ");
	scanf("%d", &n);
 
	for ( i = 1; i < n; i+=2){
		if( i < n & i % 2 == 1){
         printf("\n%d",i);
       }
	}
}
