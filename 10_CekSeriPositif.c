/*Nama Program " CekSeriPositif.c*/
/*Deskripsi    : Mengecek ketiga inputan merupakan tahanan yang bernilai positif dan menampilkan hasil Tahanan jika dirangkai seri*/
/*Pembuat        : 24060121140158-Devin Januar Siahaan*/
/*Tgl Pembuatan : Selasa. 8 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int r1,r2,r3,rseri;

    //Algoritma
    printf("Masukkan tahan pertama : ");
    scanf("%d",&r1);
    printf("Masukkan tahan kedua : ");
    scanf("%d",&r2);
    printf("Masukkan tahan ketiga : ");
    scanf("%d",&r3);
    if (r1 >0 && r2 > 0 && r3 >> 0){
        rseri = r1+r2+r3;
        printf("%d",rseri);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
