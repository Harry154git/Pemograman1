a,b=map(int,input().split())
B=b
if a>b:
    b=int(b)-1
    for i in range(a,b,-1):
        print(i,end="")
        print(" ",end="")
        print(B,end="")
        print(" ",end="")
        if i==b+1:
            break
        else :
            print("-",end="")    
        B+=1
        print(" ",end="")
if a<b:
    b=int(b)+1
    for i in range(a,b):
        print(i,end="")
        print(" ",end="")
        print(B,end="")
        print(" ",end="")
        if i==b-1:
            break
        else :
            print("-",end="")
        B-=1
        print(" ",end="")