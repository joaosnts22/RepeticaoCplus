#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
 
 
main () {
 
	char nome[40];
	int i, countA = 0, tam;
 
	printf("Digite um nome: ");
	gets(nome);
	tam = strlen(nome);
	for (i = 0; i <= tam; i++) {
		if (nome[i] == 'A' or nome[i] == 'a'){
			countA++;
		}
	}
	printf("Esse nome contem %d letra(s) A", countA);
}
