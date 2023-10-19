Angka=input().split()
if len (Angka) == 2:
    a,b=map(float,Angka)
    i,j=map(float,input().split())
    x,y=map(float,input().split())
elif len (Angka) == 6:
    a,b,i,j,x,y=map(float,Angka)
c=a-b
z=x+y
k=i/j
Hasil=c*k-z
print("{:.3f}".format(Hasil))