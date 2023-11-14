a,b=map(int,input().split())
A=a+1
d=0
for i in range(1,A):
        c=0
        for j in range (i,0,-1):
            c+=j*b
            print("({}*{})".format(j,b),end="")
            if j!=1:
                print("+",end="")
        print("={}\n".format(c),end="")
        d+=c
print(d)