#Peça ao usuário um número e mostre a tabuada desse número de 1 a 10.

cont=1

x=int(input("Entre com um número: "))

while cont<=10:
    print(x,"x",cont,"=",cont*x)
    cont=cont+1
