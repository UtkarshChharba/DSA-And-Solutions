a,b=input().split()
a=int(a)
b=int(b)
A=[]
B=[]
i=1
while i<=a:
	if a%i==0:
		A.append(i)
		i+=1
	else:
		i+=1
j=1
while j<=b:
	if b%j==0:
		B.append(j)
		j+=1
	else:
		j+=1
	
C=[]
C.append(len(A))
C.append(len(B))
k=min(C)-1
l=max(C)-1
while k>=0:
	while l>=0:
		if A[k]==B[l]:
			c=A[k]
			k=0
			break
		else:
			l-=1
	k-=1		
print(c)
		
