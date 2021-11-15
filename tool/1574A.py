t=int(input())
def check(a,s,d):
    if a==0 :
        d.append(s)
    
    else:
        check(a-1,s+"()",d)
        check(a-1,f"({s})",d)
    return d
for i in range(t):
    a=int(input())
    d=check(a,"",[])
    for j in range(a):
        print(d[j])
        