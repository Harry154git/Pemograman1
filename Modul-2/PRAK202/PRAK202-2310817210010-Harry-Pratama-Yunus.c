#include <stdio.h>

int main(){
    float Pertama,Kedua;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f",&Pertama);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%f",&Kedua);
    float hasil= Pertama+Kedua;
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",Pertama,Kedua,hasil);
    return 0;
}