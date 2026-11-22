#PBR 10 - CONCATENAR LISTAS RETORNANDO TODOS OS ELEMENTOS SEM REPETIÇÕES

def geraConcateno(lista1,lista2):
    concatenadaLista=list(set(lista1+lista2))
    print(concatenadaLista)
    return concatenadaLista

lista1=[1,2,3,4,5,5,5,5,5,6]
lista2=[1,3,3,3,3,4,4,4,4,45,5,5]
geraConcateno(lista1,lista2)
