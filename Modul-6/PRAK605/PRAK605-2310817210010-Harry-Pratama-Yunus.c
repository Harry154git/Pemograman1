#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int matriks_a[n][n],matriks_b[n][n];
    printf("Matriks A\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&matriks_a[i][j]);
        }
    }
    printf("Matriks B\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&matriks_b[i][j]);
        }
    }
    printf("Matriks AXB\n");
    int hasil=0;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        for(int k=1;k<=n;k++){
          hasil+=matriks_a[i][k]*matriks_b[k][j];
        }
        printf("%d ",hasil);
        hasil=0;
      }
      printf("\n");
    }
}