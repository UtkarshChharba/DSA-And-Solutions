n=int(input())
k=n+1
a=True
while a:
    for p in range(2,int(k**(0.5)+1)):
        if k%p==0:
            k+=1
            break
        elif k%p!=0:
            if p==int(k**(0.5)):
                print(k)
                a=False
                break