def reverse(a):
    A=0
    while a>0:
        b=a%10
        A=A*10+b
        a//=10
    return A

A,B=map(int,input().split())
A=reverse(A)
B=reverse(B)
C = A+B
print(reverse(C))