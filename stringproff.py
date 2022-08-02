s=input("Enter a string :")
flag=False
for i in s:
    print(i,end=' ')
    if((i>='a' and i<='z')):
        pass
    else:
        flag=True
        break
print()
if(flag):
    print("Invalid string")

input()
