#include<stdio.h>
#include<stdlib.h>
 
main () {
	//declarando vari�veis
	int n,s,i;
	//requisitando o valor para o usu�rio
	printf("Numero: ");
	scanf("%d", &n);
	//estrutura de repeti��o usando for para fazer as somas
	for (i=1;i<=n;i++){
		if (i==n){
		printf("%d=",i);		
		s+=i;
		}
		else{
		printf("%d+",i);		
		s+=i;	
		}
	}	
	//mostrando resultado
	printf("%d",s);
}
