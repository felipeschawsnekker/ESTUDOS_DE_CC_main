import math
def AreaCirculo(Raio):
    return math.pi*Raio**2
    
def AreaQuadrado(Lado):
    return Lado*Lado

Raio=int(input("Raio: "))
Lado=int(input("Lado: "))


print(AreaQuadrado(Lado))
print(AreaCirculo(Raio))
