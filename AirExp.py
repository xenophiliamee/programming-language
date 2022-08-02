def add(*a):
    s=0
    for i in a:
        s=s+i
    sum=s
    return(sum)

def avg(*m):
    b=0
    
    for i in m:
        b=b+i
        
    avg=b/len(m)
    return(avg)


def sub(a=5,b=4):
    c=a-b
    return(c)

def mul(a=2,b=4):
    m=a*b
    return(m)

