#dhananjay_sharma
#Armstrong number
sum=0
digit=0
num=int(input("enter  A number "))
temp = num
while temp > 0:
   digit = temp % 10
   sum += digit ** 3
   temp //= 10

if num == sum:
   print(num,"is an Armstrong number")
else:
   print(num,"is not an Armstrong number")
