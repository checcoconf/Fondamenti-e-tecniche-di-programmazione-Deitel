//Esercizio 5.35 pag. 215
#include <stdio.h>

unsigned long long int fibonacci(unsigned int);

int main() {
    printf("Inserisci un numero: ");
    int n = 0;
    do {
        scanf("%d",&n);
        if (n < 0){
            printf("|ERRORE| - non sono ammessi numeri negativi.\nInserisci un numero positivo --> ");
        }
    } while (n < 0);

    printf("Fibonacci (%d) = %llu",n, fibonacci(n));
    return 0;
}

unsigned long long int fibonacci(unsigned int n){
    unsigned long long  int risultato = 1;
    for(long long  int i = 2; i <= n; i++){
        risultato*=i;
    }
    return risultato;
}