#include <stdio.h>

int sqrt_x(int nb) {
    if (nb < 0) return -1; 
    if (nb == 0 || nb == 1) return nb;

    int limit = nb / 2;
    for (int i = 1; i <= limit; i++) {
        if (i * i == nb) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int nb;
    printf("Entrez un nombre entier : ");
    scanf("%d", &nb);

    int result = sqrt_x(nb);
    if (result != -1) {
        printf("La racine carrée exacte de %d est %d\n", nb, result);
    } else {
        printf("%d n'a pas de racine carrée exacte.\n", nb);
    }

    return 0;
}
