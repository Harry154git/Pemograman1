#include <stdio.h>
void Biodata(int a,char* b,char* c){
    int tahun_sekarang = 2020;
    int umur=tahun_sekarang-a;
    printf("Perkenalkan Nama Saya : %s\n",b);
    printf("Umur Saya : %d\n",umur);
    printf("Saya Adalah Angkatan : %d\n",tahun_sekarang);
    printf("Asal Saya dari : %s",c);
}

int main() {
    int tahunLahir;
    char Namaku[20], Asal[15];
    scanf(" %d",&tahunLahir);
    scanf(" %[^\n]%*c",&Namaku);
    scanf(" %[^\n]%*c",&Asal);
    Biodata(tahunLahir,Namaku,Asal);
    return 0;
}