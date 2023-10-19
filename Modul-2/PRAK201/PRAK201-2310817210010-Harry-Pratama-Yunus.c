#include <stdio.h>

int main(){
    char 
    Nama[TMP_MAX],Tempat[TMP_MAX],Alamat[TMP_MAX],Hobby[TMP_MAX],
    NIM[TMP_MAX],No[TMP_MAX],Paralel[TMP_MAX];
    printf("Nama                  : ");
    fgets(Nama, sizeof(Nama), stdin);
    printf("NIM                   : ");
    fgets(NIM, sizeof(NIM), stdin);
    printf("Kelas Paralel         : ");
    fgets(Paralel, sizeof(Paralel), stdin);
    printf("Tempat/Tanggal Lahir  : ");
    fgets(Tempat, sizeof(Tempat), stdin);
    printf("Alamat                : ");
    fgets(Alamat, sizeof(Alamat), stdin);
    printf("Hobby                 : ");
    fgets(Hobby, sizeof(Hobby), stdin);
    printf("No.HP                 : ");
    fgets(No, sizeof(No), stdin);
    printf("\n");
    printf("Nama                  : %s",Nama);
    printf("NIM                   : %s",NIM);
    printf("Kelas Paralel         : %s",Paralel);
    printf("Tempat/Tanggal Lahir  : %s",Tempat);
    printf("Alamat                : %s",Alamat);
    printf("Hobby                 : %s",Hobby);
    printf("No.HP                 : %s",No);
    return 0;
}
