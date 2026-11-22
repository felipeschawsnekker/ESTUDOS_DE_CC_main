from random import randint
x=None
for a in range (1000,10000):
    x=str(a)
    a=int(x[0])
    b=int(x[1])
    c=int(x[2])
    d=int(x[3])

    e=(a*10+b)
    f=(c*10+d)
    g=(e+f)**2 
    h=a*1000+b*100+c*10+d
    if (h<1000 or h>9999):
        print("Número inválido, tente novamente.")
        exit()
    if(h==g):
        print(f"O número {h} possui a característica")
