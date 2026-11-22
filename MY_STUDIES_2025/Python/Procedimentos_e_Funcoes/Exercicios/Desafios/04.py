lista=[0,-14,5,100,-80,40,-14]
k=(":=:=:")*10


print("A lista é: ",lista)
print("\n")
print(k)

print("A lista reversa é: ",(list(reversed(lista))))
print("\n")
print(k)

lista.insert(7,5)
print("A lista com o número 5 adicionado no final é:",lista)
print("\n")
print(k)

lista.insert(3,100)
print("A lista com o número 100 adicionado no meio é:",lista)
print("\n")
print(k)

for n in set(lista):
    print("*",n,"aparece",lista.count(n),"vezes",)
print("\n")
print(k)

print("A lista em ordem crescente: ",sorted(lista))
lista_revertida=(list(reversed(sorted(lista))))
print("A lista em ordem decrescente: ",lista_revertida)
    



