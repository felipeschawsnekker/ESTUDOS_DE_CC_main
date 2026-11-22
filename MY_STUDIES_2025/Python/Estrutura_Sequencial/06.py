print("=:="*20)

A=float(input("Digite A: "))
B=float(input("Digite B: "))
C=float(input("Digite C: "))

delta = B*B-4*A*C 
x1 = (-B + delta ** (1/2))/(2.0*A)
x2 = (-B - delta ** (1/2))/(2.0*A)

if(delta<0) :
    print("Raiz não existe nos Reais")

else :
    print("A primeira raiz é: ",x1)
    print("A segunda raiz é: ",x2)
