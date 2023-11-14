#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int B=b;
    if(a>b){
    for(int i=a;i>=b;i--){
        printf("%d ",i);
        printf("%d ",B);
        if(i==b){
            break;
        }
        else {
            printf("-");
        }    
        B+=1;
        printf(" ");
    }
    }
    if(a<b){
    for(int i=a;i<=b;i++){
        printf("%d ",i);
        printf("%d ",B);
        if(i==b){
            break;
        }
        else {
            printf("-");
        }    
        B-=1;
        printf(" ");
    }
    }
return 0;
}