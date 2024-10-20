#include <stdio.h>

int main(void) {
    int n=0;
    printf("inserisci un numero da scomporre in fattori primi:");
    scanf("%d", &n);
    for (int i = 2; 1 < n; i++) {
        while (n % i == 0) {
        printf("%d \n ", i);
            n = n / i;
        }
    }
}
