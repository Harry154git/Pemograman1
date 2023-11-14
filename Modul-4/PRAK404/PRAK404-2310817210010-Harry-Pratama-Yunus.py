while True :
    print("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    print("Masukkan Pilihan : ",end="")
    a=float(input())
    if a==1:
        print("Masukkan Nilai Pertama : ",end="")
        b=float(input())
        print("Masukkan Nilai Kedua : ",end="")
        c=float(input())
        d=b+c
        print("Hasil pertambahan antara {:.2f} dengan {:.2f} adalah {:.2f}".format(b,c,d))
        continue
    elif a==2:
        print("Masukkan Nilai Pertama : ",end="")
        b=float(input())
        print("Masukkan Nilai Kedua : ",end="")
        c=float(input())
        d=b-c
        print("Hasil pengurangan antara {:.2f} dengan {:.2f} adalah {:.2f}".format(b,c,d))
        continue
    elif a==3:
        print("Masukkan Nilai Pertama : ",end="")
        b=float(input())
        print("Masukkan Nilai Kedua : ",end="")
        c=float(input())
        d=b*c
        print("Hasil perkalian antara {:.2f} dengan {:.2f} adalah {:.2f}".format(b,c,d))
        continue
    elif a==4:
        print("Masukkan Nilai Pertama : ",end="")
        b=float(input())
        print("Masukkan Nilai Kedua : ",end="")
        c=float(input())
        d=b/c
        print("Hasil pembagian antara {:.2f} dengan {:.2f} adalah {:.2f}".format(b,c,d))
        continue
    elif a==5:
        print("Terimakasih, telah menggunakan kalkulator Harry Pratama Yunus")
        break
    else :
        print("Input anda salah, silahkan coba lagi")
        continue