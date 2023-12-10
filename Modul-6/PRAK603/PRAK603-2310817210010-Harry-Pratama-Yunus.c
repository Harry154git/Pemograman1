#include<stdio.h>

int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int n=n1;
    int m=n2;
    int angka[2][n];
    if (n1==n2){
        for (int i=1;i<=2;i++){
            for (int j=1;j<=m;j++){
                scanf("%d",&angka[i][j]);
            }
        }
        for (int a=1;a<=m;a++){
            printf("%d ",angka[1][a]*angka[2][a]);
        }
    }
    else{
        printf("Jumlah tidak sama");
    }
    return 0;
}