import math

a=int(input())
if a>=86400:
    b=a/86400
    a=a%86400
    B=math.floor(b)
    print(str(B)+" hari ",end="")
if a>=3600:
    c=a/3600
    a=a%3600
    C=math.floor(c)
    if C<10 or C==0:
        print("{:02d}:".format(C),end="")
    else:
        print(str(C)+":",end="")
else:
    print("00:",end="")
if a>=60:
    d=a/60
    a=a%60
    D=math.floor(d)
    if D<10 or D==0:
        print("{:02d}:".format(D),end="")
    else:
        print(str(D)+":",end="")
else:
    print("00:",end="")
e=a
if e<10 or e==0:
    print("{:02d}".format(e))
else:
    print(str(e))