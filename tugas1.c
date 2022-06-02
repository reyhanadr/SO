#include <stdio.h>
int main(){
    int p,l,k,luas;
    printf("Masukkan Panjang:"); scanf("%i", &p);
    printf("Masukkan Lebar:"); scanf("%i", &l);
    k = (p+l) * 2;
    luas = p*l;
    printf("Luas = %i", luas);
    printf("Keliling = %i", k);
}