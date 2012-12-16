ar = []
ar.append(1)
for i in range(1, 10002):
	ar.append(ar[i-1]*(4*i-2)/(i+1))
n = int(raw_input())
while(n>0):
	print ar[n]%1000000
	n = int(raw_input())
