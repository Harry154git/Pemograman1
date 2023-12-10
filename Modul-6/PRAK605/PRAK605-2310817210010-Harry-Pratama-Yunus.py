n=int(input())
matriks_a=[]
matriks_b=[]
print("Matriks A")
for i in range(n):
    baris =[int(x) for x in input().split()]
    matriks_a.append(baris)
print("Matriks B")
for i in range(n):
    baris =[int(x) for x in input().split()]
    matriks_b.append(baris)
print("Matriks AXB")
hasil=0
for i in range(n):
    for j in range(n):
        for k in range(n):
            hasil+=matriks_a[i][k]*matriks_b[k][j]
        print(hasil,end=" ")
        hasil=0
    print()