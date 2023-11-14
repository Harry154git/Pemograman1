a,b=input().split()
a=int(a)
A=a
for i in range(1,51):
    if i==A:
       print(b,end=" ")
       A+=a
       continue
    print(i,end=" ")