#Faça a troca de valores entre dois números

def trocaDeValores(a,b):
    print("TROCANDO VALORES..........")
    temp = a 
    a = b
    b = temp
    return a,b

a=5
b=10
print("A: ",a)
print("B: ",b)

a,b=trocaDeValores(a,b)

print("A: ",a)
print("B: ",b)
