#include <stdio.h>

int main (){
    float a,b,i,j,x,y;
    scanf("%f %f %f %f %f %f",&a,&b,&i,&j,&x,&y);
    float c=a-b,z=x+y;
    float k=i/j;
    float Hasil=c*k-z;
    printf("%.3f",Hasil);
    return 0;
}