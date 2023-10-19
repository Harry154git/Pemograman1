Pertama=float(input("Masukkan Nilai Pertama\t:"))
Kedua=float(input("Masukkan Nilai Kedua\t:"))
hasil=Pertama+Kedua
if Pertama == int(Pertama):
    Pertama=int(Pertama)
    print("Hasil dari penjumlahan nilai pertama \""+str(Pertama)+"\" dan nilai kedua \""+str(Kedua)+"\" adalah \"{:.2f}\"".format(hasil))
else :
    print("Hasil dari penjumlahan nilai pertama \""+str(Pertama)+"\" dan nilai kedua \""+str(Kedua)+"\" adalah \"{:.2f}\"".format(hasil))