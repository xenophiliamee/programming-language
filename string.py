s=str(input("Enter a string :"))
i=0
while i<len(s):
    if(s[i]==s[i].isdigit()):
        print(s[i])
        i+=1
    else:
        print("Invlid string")
        break
