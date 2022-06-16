#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("======================================================\n"
           "  PROGRAM MENAMPILKAN BENTUK ATAU POLA BELAH KETUPAT \n"
           "======================================================\n\n");
    int spasi, segitiga = 1, tinggi;     
    spasi = tinggi/2;
    printf("Masukan Tinggi: ");
    scanf("%d", tinggi);
    for(int baris = 1 ; baris <= tinggi ; baris++){
        if(spasi>0 && segitiga == 1){ 
         segitiga = 1;
            for(int kolom = 1 ; kolom <= tinggi ; kolom++){            
                if(kolom > spasi && kolom <= (tinggi-spasi)){
                    printf("*"); 
                }
                else if(kolom > (tinggi-spasi)){
                    printf(" "); 
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
            --spasi;
        }else if(spasi<=0 || segitiga == 2 ){
            segitiga = 2;
            for(int kolom = 1 ; kolom <= tinggi ; kolom++){            
                if(kolom > spasi && kolom <= (tinggi-spasi)){
                    printf("*");
                }
                else if(kolom > (tinggi-spasi)){
                    printf(" ");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
            ++spasi;
        }
    }    
    printf("\n");    
    system("pause");
    return(0);
}
