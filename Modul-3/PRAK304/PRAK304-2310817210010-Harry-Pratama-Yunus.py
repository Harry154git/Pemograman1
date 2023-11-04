a=int(input())
if a>0 and a<10:
    print("Satuan")
elif a==0:
    print("Nol")
elif a>=100:
    print("Anda Menginput Melebihi Limit Bilangan")
elif a>=20:
    print("Puluhan")
elif a>=10:
    print("Belasan")
