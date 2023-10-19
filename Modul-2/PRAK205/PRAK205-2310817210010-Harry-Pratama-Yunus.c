#include <stdio.h>
#include <math.h>

int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    int Alas=sqrt(B*B-A*A);
    int keliling=Alas+A+B,luas=Alas*A*1/2;
    printf("Alas = %d cm\n",Alas);
    printf("Tinggi = %d cm\n",A);
    printf("Keliling = %d cm\n",keliling);
    printf("Luas = %d cm^2",luas);
    return 0;
}