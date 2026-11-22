from collections import Counter
lista=[0,-14,5,100,-80,40,-14]

def ImprimirLista(lista):
    print("\nIMPRIMINDO LISTA...")
    for i in lista:
        print(i,end=" ")
    print()
        
def Reverse(lista):
    print("\nREVERTENDO LISTA...")
    lista.reverse()
    ImprimirLista(lista)

def Adicionar5(lista):
    lista.append(5)
    print("\nADICIONANDO 5 NA LISTA")
    ImprimirLista(lista)

def Adicionar100posi4(lista):
    print("ADICIONANDO 100 NA LISTA")
    lista.insert(3,100)
    ImprimirLista(lista)

def ImprimirQuantidade(lista):
    contador=Counter(lista)
    for elemento,quantidade in contador.items():
        print(f"{elemento}: {quantidade} vez(es)")

def ImprimirAscOrDesc(lista):
    print("LISTA EM ORDEM ASCENDENTE: ")
    lista.sort()
    ImprimirLista(lista)
    print("LISTA EM ORDEM DECRESCENTE: ")
    lista.reverse()
    ImprimirLista(lista)
    
ImprimirLista(lista)
Reverse(lista)
Adicionar5(lista)
Adicionar100posi4(lista)
ImprimirQuantidade(lista)
ImprimirAscOrDesc(lista)
