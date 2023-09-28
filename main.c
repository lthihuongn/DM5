#include <stdio.h>
int calculerMoyenne(int notes[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += notes[i];
    }
    return somme / taille;
}
void binary(int n) {
    if (n > 0) {
        binary(n / 2);
        printf("%d", n % 2);
    }
}

void hexadecimal(int n) {
    printf("moyenne en base 16 : %X", n);
}


int main() {
    int T[] = {20, 12, 13, 14,16, 16, 18, 2  };
    int moyenne_10 = calculerMoyenne(T, 8);
    printf("moyenne en base 10 : %d\n", moyenne_10);
    printf("moyenne en base 2 : ");
    binary(moyenne_10);
    printf("\n");
    hexadecimal(moyenne_10);
    return 0;
}
