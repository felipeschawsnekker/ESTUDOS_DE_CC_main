#Soma dos elementos de uma lista
lista=[]
for i in range(66,77):
    lista.append(i)
soma=0;
for i in lista:
    if(i!=lista[-1]):
        print(i,"+ ",end="")
    soma=soma+i
    
print(lista[-1],"= ",end="")
print(soma)
print("\nLista: ",lista)
print("Soma: ",soma)
