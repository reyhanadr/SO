#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int tinggi,alas,i,j;
    printf("=====SEGITIGA BINTANG=====");
    printf("\n");
    printf("\n");
    printf("Masukan Tinggi Segitiga:"); scanf("%i", &tinggi);
    alas = (tinggi +1) / 2;

    if (tinggi%2 == 0){
        printf("Segitiga Tidak Dapat Dibuat, Input Salah!");
    }else{
        for(i=1; i<=alas; i++){
            for (j=1; j<=i; j++){
                printf("*");
                printf("\n");
            }
        }
    }
    for (i=alas-1; i>=1; i--){
        for (i=1; i<=alas; i++){
            for(j=1; j<=i; j++){
                printf("*");
                printf("\n");
            }
        }
    }
    for (i=alas-1; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("*");
            printf("\n");
        }
    }
    printf("\n");

}

