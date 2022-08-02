#function which finds the average of variable number of arguments
def fun(*d):
    s=0
    for i in d:
        s=s+i
    avg=s/len(d)
    return(avg)
     
p=fun(1,2,3,4,5)
print(p)
