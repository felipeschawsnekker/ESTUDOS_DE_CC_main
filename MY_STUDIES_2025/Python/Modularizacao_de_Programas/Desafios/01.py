#from MinhaBib import *

lista=[2,4,35,50,23,17,9,12,27,5]
cont=[0]*10
naoprimos=[]
primos=[]
crescente=sorted(lista)
print("Maior valor: ",crescente[-1])

print("Lista em ordem crescente: ", crescente)

for i in range(0,10):
    for j in range(1,lista[i]+1):
        if lista[i]%j==0:
            cont[i]+=1
    if cont[i]==2:
        primos.append(lista[i])
    else:
        naoprimos.append(lista[i])
                
                
print("\n \n \n")
print("Primos: ",sorted(primos))
print("Nao primos: ",sorted(naoprimos))
