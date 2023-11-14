#include <stdio.h>

int main(){
    while(1){
        printf("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        float a,b,c,d;
        printf("Masukkan Pilihan : ");
        scanf("%f",&a);
        if(a==1){
        printf("Masukkan Nilai Pertama : ");
        scanf("%f",&b);
        printf("Masukkan Nilai Kedua : ");
        scanf("%f",&c);
        d=b+c;
        printf("Hasil pertambahan antara %.2f dengan %.2f adalah %.2f\n",b,c,d);
        continue;
        }
        else if(a==2){
        printf("Masukkan Nilai Pertama : ");
        scanf("%f",&b);
        printf("Masukkan Nilai Kedua : ");
        scanf("%f",&c);
        d=b-c;
        printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n",b,c,d);
        continue;
        }
        else if(a==3){
        printf("Masukkan Nilai Pertama : ");
        scanf("%f",&b);
        printf("Masukkan Nilai Kedua : ");
        scanf("%f",&c);
        d=b*c;
        printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n",b,c,d);
        continue;
        }
        else if(a==4){
        printf("Masukkan Nilai Pertama : ");
        scanf("%f",&b);
        printf("Masukkan Nilai Kedua : ");
        scanf("%f",&c);
        d=b/c;
        printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n",b,c,d);
        continue;
        }
        else if(a==5){
        printf("Terimakasih, telah menggunakan kalkulator Harry Pratama Yunus");
        break;
        }
        else{
        printf("Input anda salah, silahkan coba lagi\n");
        continue;
        }
    }
return 0;
}