#PRB06 TUPLAS DE PARES ORDENADOS
#Dada uma lista de número inteiros crie uma tupla com pares ordenados
#Numero, numero ao quadrado

listaInteiro=[1,2,3,4,5,6,7,8,9]

def geraTupla(lista):
    templista=[]
    for i in lista:
        templista.append(i**2)
    
    novaLista=tuple(zip(listaInteiro,templista))
    return novaLista
    print(novaLista)
    
geraTupla(listaInteiro)
        
        
