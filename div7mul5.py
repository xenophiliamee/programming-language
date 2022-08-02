#Write a program to print first four numbers which are divisible by 7 and multiple of 5
lower =1
upper = 1000
a=1
i=1
for i in range(lower,upper):
  if(i%7==0 and i%5==0):
    print(i)
    i+=1
    a+=1
    if (a>4):
       break
input()      
















