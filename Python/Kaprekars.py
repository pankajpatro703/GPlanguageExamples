def makenumber(l):
	'''Convert list of integers to an integer as per the order of elements in the list'''
	n=0
	for i in l:
		n=n*10+i
	return(n)

n=int(input("Enter last no. of digits: "))
t=0
blank=[]
for i in range(n+1):
	t=t*10+i
	m=t
	results=[0]
	while(m not in results):
		results.append(m)
		count=0
		digits=[]
		while(m!=0):
			count+=1
			digits.append(m%10)
			m//=10
		digits.reverse()
		digits.sort(reverse=True)
		max=digits[:]
		digits.sort()
		min=digits[:]
		m=makenumber(max)-makenumber(min)
	if(m==results[-1]):
		print("Digits",i,":",m)
		blank.append(i)
	else:
		print("Digits",i,": Doesn't exist")
print(blank)
