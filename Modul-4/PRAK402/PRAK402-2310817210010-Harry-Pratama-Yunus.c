#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if (i%2!=0){
            printf("%d ",i);
        }
        else{
            continue;
        }
    }
    printf("\n");
    for(int i=a;i>0;i--){
        if (i%2==0){
            printf("%d ",i);
        }
        else{
            continue;
        }
    }
return 0;
}