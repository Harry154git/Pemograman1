a=int(input())
if a>0 and a<10:
    print("satuan")
elif a==0:
    print("nol")
elif a>=100:
    print("Anda Menginput Melebihi Limit Bilangan")
elif a>=20 and a<=99:
    print("puluhan")
elif a>=10 and a<20:
    print("belasan")