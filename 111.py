def quicksort(a,s,e):
    if s>=e:
        return
    pi=partition(a,s,e)
    quicksort(a,s,pi-1)
    quicksort(a,pi+1,e)
def partition(a,s,e):
    c=0
    for i in range(s+1,e+1):
        if a[i]<=a[s]:
            c+=1
    a[s],a[c+s]=a[c+s],a[s]
    t=a[c+s]
    i,j=s,s+c+1
    while i<s+c:
        if a[i]<=t:
            i+=1
        elif a[j]>t:
            j+=1
        else:
            a[i],a[j]=a[j],a[i]
            i+=1
            j+=1 
    return s+c 
a=list(map(int,input().split()))
quicksort(a,0,len(a)-1)
print(a)

