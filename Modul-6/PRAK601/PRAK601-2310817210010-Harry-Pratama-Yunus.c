#include<stdio.h>

int main(){
    int B,K;
    scanf("%d %d",&B,&K);
    int matriks[B][K];
    for(int i=1;i<=B;i++){
        for(int j=1;j<=K;j++){
        scanf("%d",&matriks[i][j]);
        }
    }
    for(int i=1;i<=B;i++){
        for(int j=1;j<=K;j++){
        printf("%d ",matriks[i][j]);
        }
        printf("\n");
    }
    return 0;
}