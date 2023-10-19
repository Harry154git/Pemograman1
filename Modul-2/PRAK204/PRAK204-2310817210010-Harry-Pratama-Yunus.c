#include <stdio.h>
#include <math.h>
int main(){
    float jari_jari,tinggi_bejana;
    float pi=3.142857;
    scanf("%f %f",&jari_jari,&tinggi_bejana);
    float Volume=pi*jari_jari*jari_jari*tinggi_bejana;
    float luas = 2 * pi * jari_jari * (jari_jari + tinggi_bejana);
    float keliling = 2 * pi * jari_jari;
    printf("Volume = %.2f\n",Volume);
    printf("luas = %.2f\n",luas);
    printf("Keliling = %.2f\n",keliling);
    return 0;
}