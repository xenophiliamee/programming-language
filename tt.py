 #Write a function which finds the area of a circle
def area(r):
    pi=3.14
    area=pi*r*r
    return(area)

r=float(input('enter radius:'))
print ('area of circleis:',area(r))
input()
