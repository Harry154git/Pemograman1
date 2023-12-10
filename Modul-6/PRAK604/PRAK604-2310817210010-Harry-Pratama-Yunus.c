#include<stdio.h>
#include<string.h>

int main(){
    char kalimat1[TMP_MAX],kalimat2[TMP_MAX];
    fgets(kalimat1,sizeof(kalimat1),stdin);
    fgets(kalimat2,sizeof(kalimat2),stdin);
    int panjang1=strlen(kalimat1),panjang2=strlen(kalimat2);
    int a=0,b=0;
    if (panjang1 == panjang2){
        for(int i=0;i<=panjang1-2;i++){
            if(kalimat1[i]==' '&&kalimat2[i]==' '){
                printf(" ");
                continue;
            }
            if(kalimat1[i]==kalimat2[i]){
                printf("*");
                a+=1;
            }
            else{
                printf("#");
                b+=1;
            }
            if(i==panjang1-2){
                printf("\n");
            }
        }
        printf("*=%d\n",a);
        printf("#=%d\n",b);
        if(a>=b){
            printf("Pesan Asli");
        }  
        else{
            printf("Pesan Palsu");
        }
    } 
    else{
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    return 0;
}