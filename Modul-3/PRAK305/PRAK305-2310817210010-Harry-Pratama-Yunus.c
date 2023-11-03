#include <stdio.h>
#include <math.h>

int main(){
    int a;
    float b,c,d;
    scanf("%d",&a);
    if(a>=86400){
        b=a/86400;
        a=a%86400;
        printf("%.f hari ",b);
    }
    if(a>=3600){
        c=a/3600;
        a=a%3600;
        int C=floor(c);
        if(C<10||C==0){
            printf("%02d:",C);
        }
        else{
            printf("%d:",C);
        }
    }
    else {
        printf("00:");
    }
    if(a>=60){
        d=a/60;
        a=a%60;
        int D=floor(d);
        if(D<10||D==0){
            printf("%02d:",D);
        }
        else{
            printf("%d:",D);
        }
    }
    else{
        printf("00:");
    }
    int e=a;
    if(e<10||e==0){
        printf("%02d",e);
    }
    else{
        printf("%d",e);
    }
return 0;
}