#PBR 08 - ORDENAÇÃO PERSONALIZADA
#RECEBA UMA LISTA DE TUPLAS REPRESENTANDO PESSOAS(NOME,IDADE) E ORDENE PELA IDADE

tuplaNome=("Felipe","Vitor","Howard","Queiroz","Albuquerque")
tuplaIdade=(19,22,19,13,30)
listaPessoa=list(zip(tuplaNome,tuplaIdade))
lista_ordenada = sorted(listaPessoa, key=lambda x: x[1])
print(listaPessoa)
print(lista_ordenada)
