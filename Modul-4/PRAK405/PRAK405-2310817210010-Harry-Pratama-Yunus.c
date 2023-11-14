#include <stdio.h>

int main(){
    int a,b,d=0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++){
        int c=0;
        for (int j=i;j>0;j--){
            c+=j*b;
            printf("(%d*%d)",j,b);
            if (j!=1){
                printf("+");
            }
        }
        printf("=%d\n",c);
        d+=c;
    }
    printf("%d",d);
return 0;
}