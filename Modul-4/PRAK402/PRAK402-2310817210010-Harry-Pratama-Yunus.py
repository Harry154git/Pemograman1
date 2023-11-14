a=input()
A=int(a)+1
for i in range(1,A):
    if i%2!=0:
     print (str(i)+" ",end="")
print("")
for i in range(A,1,-1):
    if i%2==0:
     print (str(i)+" ",end="")