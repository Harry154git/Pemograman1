#include <stdio.h>

int main(){
    int a;
    char b;
    scanf("%d %c",&a,&b);
    int A=a;
    for(int i=1;i<=50;i++){
        
        if(i==A){
            printf("%c ",b);
            A+=a;
            continue;
        }
        printf("%d ",i);
        
    }
return 0;
}