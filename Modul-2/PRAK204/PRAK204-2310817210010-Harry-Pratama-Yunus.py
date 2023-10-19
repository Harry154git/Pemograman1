Angka=input().split()
if len(Angka)==1:
  jari_jari=float(Angka[0])
  tinggi_bejana=float(input())
elif len(Angka)==2:
  jari_jari,tinggi_bejana=map(float,Angka)
pi=3.142857
Volume=pi*jari_jari*jari_jari*tinggi_bejana
luas = 2 * pi * jari_jari * (jari_jari + tinggi_bejana)
keliling = 2 * pi * jari_jari
print("Volume = {:.2f}".format(Volume))
print("luas = {:.2f}".format(luas))
print("Keliling = {:.2f}".format(keliling))