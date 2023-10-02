import math
alas=5
tinggi=12
c=round(math.sqrt(alas*alas+tinggi*tinggi))
keliling=round(alas+tinggi+c)
luas=round(alas*tinggi/2)
print("Diketahui :")
print("Alas = " + str(alas))
print("Tinggi = "+ str(tinggi))
print("\n")
print("Jawab :")
print("Sisi A = "+str(alas))
print("Sisi B = "+str(tinggi))
print("Sisi C = "+str(c))
print("Keliling = "+ str(keliling))
print("Luas = "+ str(luas))