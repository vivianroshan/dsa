try:
  cb=['-1']
  dum=str(input('Enter chars (only 2): '))
  cb.extend(dum)
 
  s=str(input('\nEnter encoded sequence:\n'))
  s=s.replace(' ','',100)
  #print(s)
  n=4
  l=0
  j=[s[i:i+n] for i in range(0, len(s), n)]
  #print(j)
  q=[]
  k=[[j[z][i:i+3] for i in range(0, n,3)]for z in range(0,len(j))]
  #print(k)
  for p in range(0,len(k)):
      decimal = 0
      for digit in k[p][0]:
          decimal = decimal*2 + int(digit)
      if k[p][1]=='0':
          f=str(decimal)+'1'
      if k[p][1]=='1':
          f=str(decimal)+'2'    
      q.append(int(f))
  print('\nNumerical representation: ')
  print(q)
  v=[]
  qout=[]
  for p in range(0,len(k)):
    v.append(q[p]%10)
    qout.append(int(q[p]/10))
  #print(v)
  #print(qout)
  #cb=['-1','0','1']
  #print(cb)
  for p in range(0,len(q)):
    cb.append(cb[qout[p]]+cb[v[p]])
  print('\nCode book:')
  print(cb[1:])
  ans=''
  for p in range(1,len(cb)):
    ans=ans+cb[p]
  print('\nDecoded sequence')
  print(ans)
except:
  print('error')


                    
