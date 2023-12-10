B,K=map(int,input().split())
angka=list(map(int,input().split()))
kolom=K
for i in range(len(angka)):
    print(angka[i],end=' ')
    if i==kolom-1:
        print()
        kolom+=K