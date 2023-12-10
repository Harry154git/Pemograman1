n1,n2=list(map(int,input().split()))
if n1==n2:
    angka1 = list(map(int, input().split()))
    angka2 = list(map(int, input().split()))
    for i in range (n1):
        print(angka1[i]*angka2[i],end=' ')
else :
    print("Jumlah tidak sama")