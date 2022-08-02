def doing(q,a,b):
    if(q==0):
        print(a+b)
        return
    elif(q==1):
        print(a-b)
        return
    elif(q==2):
        print(a*b)
        return
    elif(q==3):
        print(a/b)
        return
    elif(q==4):
        print(a**b)
        return

i=0;
while(i<1):
    q=int(input("""enter a number to choose
                 \n0 for adition
                 \n1 for substration
                 \n2 for multiplication
                 \n3 for division
                 \n4 for power of number"""));
    a=int(input("enter a interger number"))
    b=int(input("enter a interger number"))
    doing(q,a,b)
    i=int(input("exit press 1 or contienu 0"))

