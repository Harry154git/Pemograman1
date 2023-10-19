import math
Angka=input().split()
if len(Angka)==1:
    A=int(Angka[0])
    B=int(input())
elif len(Angka)==2:
    A,B=map(int,Angka)
Alas=round(math.sqrt(B*B-A*A))
keliling=round(Alas+A+B)
luas=round(Alas*A*1/2)
print("Alas = " + str(Alas)+" cm")
print("Tinggi = "+ str(A)+" cm")
print("Keliling = "+ str(keliling)+" cm")
print("Luas = "+ str(luas)+" cm^2")