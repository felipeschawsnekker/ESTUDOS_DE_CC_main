#Formula quadratica em python

def Bhaskara(a,b,c):
    if((b**2-4*a*c)>=0):
        primeiroValor=(-b+(b**2-4*a*c)**0.5)
        segundoValor=(-b-(b**2-4*a*c)**0.5)
        return primeiroValor,segundoValor
    else:
        print("Delta negativo. Equação sem solução")
a=float(input("A: "))
b=float(input("B: "))
c=float(input("C: "))

x1,x2=Bhaskara(a,b,c)

print("Primeira Raiz: ",x1)
print("Segunda Raiz",x2)
