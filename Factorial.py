#Python Program for factorial of a number 
Num=int(input("enter you vale"))
fact=1
if Num < 0:
    print("Factorial does not exist for negative numbers")
elif Num == 0:
    print("The factorial of 0 is 1")
else:
    for i in range(1, Num + 1):
        fact *=  i
    print("The factorial of",Num,"is",fact)
input()
