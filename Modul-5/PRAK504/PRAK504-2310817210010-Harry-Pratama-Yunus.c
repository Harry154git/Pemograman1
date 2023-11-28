#include <stdio.h>
#include <string.h>
int reverse(int a){
    int A=0,b;
    for(int i=a;i>0;i/=10){
        b=i%10;
        A=A*10+b;
    }
return A;
}

int main() {
    int A, B;
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
    int C = A+B;
    printf("%d",reverse(C));
}