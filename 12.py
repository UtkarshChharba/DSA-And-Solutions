t=int(input())
for p in range(t):
    n,m,i,j=map(int,input().split())
    b=[(abs(n-i)+abs(m-j)),(abs(1-i)+abs(m-j)),(abs(n-i)+abs(1-j)),(abs(1-i)+abs(1-j))]
    a=max(b)
    c=b.index(a)
    if c==0:
       print(n,m,1,1)
    elif c==1:
        print(1,m,n,1)
    elif c==2:
        print(n,1,1,m)
    elif c==3:
        print(1,1,n,m)
    











