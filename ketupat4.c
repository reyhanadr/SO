#include <stdio.h>
void main () {
    int n, a, b;
    printf("Masukkan Batasan Angka : ");
    scanf("%d", &n);
    printf("\n");

    for (a = 1; a<=n; a++) {
        for (b = n; b>=a; b--) {
            printf (" ");
        }
        for (b = 1; b<=a; b++){
            printf ("*");
        }
        for (b = (a-1); b>=1; b--) {
            printf ("*");
        }
            printf ("\n");
    }

    for (a = 1; a<=n-1; a++) {
        for (b = 0; b<=a; b++) {
            printf (" ");
        }
        for (b = 1; b<=(n-a); b++) {
            printf ("*");
        }
        for (b = (n-a-1); b>=1; b--) {
            printf ("*");
        }
        printf ("\n");
    }
}
