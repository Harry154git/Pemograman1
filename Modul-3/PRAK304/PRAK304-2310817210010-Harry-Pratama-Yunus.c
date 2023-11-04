#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a>0&&a<10){
        printf("satuan");
    }
    else if(a==0){
        printf("nol");
    }
    else if(a>=100){
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    else if(a>=20){
        printf("puluhan");
    }
    else if(a>=10){
        printf("belasan");
    }
    return 0;
}
