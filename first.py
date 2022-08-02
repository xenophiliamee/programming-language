#READ AND WRITE THE FILE
import random
f=open('dhananjay.txt','w')
f.write('enter your name')
f.close()
f=open("dhananjay.txt")
st=f.read()
print(st)
f.close()
