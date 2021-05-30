s=str(input('Enter input sequence:\n'))

cb=['-1']
res=[]
num=[]

i=0

while i<len(s):
	j=i+1
	while j<len(s):
		if s[i:j] not in cb:
			cb.append(s[i:j])
			#print(s[i:j])
			i=j-1
			break
		if j==len(s)-1:
			s=s+s[0]
		j+=1

	i+=1

for c in cb[3:]:
	l1=str(cb.index(c[-1]))
	f1=str(cb.index(c[:-1]))
	l2=str(cb.index(c[-1])-1)
	f2=bin(cb.index(c[:-1]))[2:]

	num.append(f1+l1)
	res.append(f2+l2)

l=4

#pad zeroes in front to make all the lengths equal
for i,e in enumerate(res):
	res[i]='0'*(l-len(e))+e

print('\nCode Book: ') 					
print(cb[1:])
print('\nNumerical Representation: ') 	
print(num)
print('\nEncoded Sequence: ')				
print(' '.join(res))
