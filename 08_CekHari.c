/*Nama Program " CekHari.c*/
/*Deskripsi    : Menampilkan nama hari untuk inputan nomor 1 - 7*/
/*Pembuat        : 24060121140158-Devin Januar Siahaan*/
/*Tgl Pembuatan : Selasa. 8 Maret 2022*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int i;

    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d",&i);
    switch (i){
        case 1 :
            printf("Minggu");
            break;
        case 2 :
            printf("Senin");
            break;
        case 3:
            printf("Selasa");
            break;
        case 4:
            printf("Rabu");
            break;
        case 5:
            printf("Kamis");
            break;
        case 6:
            printf("Jumat");
            break;
        case 7:
            printf("Sabtu");
            break;
        default:
            printf("Masukan nomor hari tidak tepat");
            break;
            }
    return 0;
}
