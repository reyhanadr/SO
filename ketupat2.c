#include<stdio.h>
#include<stdlib.h>
int main()
{
    int spasi, segitiga = 1 , jum_bintang = 19;    
    spasi = jum_bintang/2;

    printf("======================================================\n"
           "  PROGRAM MENAMPILKAN BENTUK ATAU POLA BELAH KETUPAT \n"
           "======================================================\n\n");    
    for(int baris = 1 ; baris <= jum_bintang ; baris++){
        if(spasi>0 && segitiga == 1){ 
         segitiga = 1;
            for(int kolom = 1 ; kolom <= jum_bintang ; kolom++){            
                if(kolom > spasi && kolom <= (jum_bintang-spasi)){
                    printf("*"); 
                }
                else if(kolom > (jum_bintang-spasi)){
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
            for(int kolom = 1 ; kolom <= jum_bintang ; kolom++){            
                if(kolom > spasi && kolom <= (jum_bintang-spasi)){
                    printf("*");
                }
                else if(kolom > (jum_bintang-spasi)){
                    printf(" ");
                }
                else{
                    printf(" "); // untuk mencetak sepasi ruang kosong
                }
            }
            printf("\n"); // untuk ganti ke baris berikutnya
            ++spasi;
        }
    }    
    printf("\n");    
    system("pause");
    return(0);
}
