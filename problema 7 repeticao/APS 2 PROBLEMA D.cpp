#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int n;
    int bin[7];
    int i;
 
    printf("Digite o numero: ");
    scanf("%d", &n);
 
    for (i = 7; i >= 0; i--) {
        if (n % 2 == 0) {
            bin[i] = 0;
            n = n / 2;
        }
        else {
            bin[i] = 1;
            n = n / 2;
        }
    }
 
    for (i = 0; i <= 7; i++) {
        printf("%d", bin[i]);
    }
 
    return 0;
}
