kalimat1=input()
kalimat2=input()
panjang1=len(kalimat1)
panjang2=len(kalimat2)
a=0
b=0
if panjang1 == panjang2:
    for i in range (panjang1):
        if kalimat1[i]==' ' and kalimat2[i]==' ':
            print(" ", end='')
            continue
        if kalimat1[i]==kalimat2[i]:
            print("*", end='')
            a=a+1
        else:
            print("#", end='')
            b=b+1
        if i==panjang1-1:
            print()
    print("*={}".format(a))
    print("#={}".format(b))
    if a>=b:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
else:
    print("Panjang kalimat berbeda, pesan palsu")