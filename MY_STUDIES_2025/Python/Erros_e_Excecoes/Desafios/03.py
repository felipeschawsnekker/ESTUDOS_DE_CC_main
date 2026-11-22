from random import randint

cont=0
n=int(input("Quantas vezes você quer jogar dois dados? "))
lista1=[]
lista2=[]
listasoma=[]
for i in range(1,n+1):
    d1=randint(1,6)
    d2=randint(1,6)
    lista1.append(d1)
    lista2.append(d2)
    listasoma.append(d1+d2)
print(f"Dado 1: {lista1}")
print(f"Dado 2: {lista2}")
print(f"Soma dos dados: {listasoma}")

for soma in listasoma:
    if soma == 12:
        cont += 1

    
if(cont>=1):
    print(f"Você venceu {cont} vezes")
else:
    print("Você venceu nenhuma vez")
