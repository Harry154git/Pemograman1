import math
def hitung(nilai1,nilai2):
    hasil=abs(nilai1-nilai2)
    return hasil

def mutlak(angka):
    hasil=abs(angka)
    return hasil

a,c,b,d=map(int,input().split())
Hasil = hitung(a,b) + hitung(c,d)
print(mutlak(Hasil))