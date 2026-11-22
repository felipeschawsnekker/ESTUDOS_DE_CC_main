
#Calcular a soma de todos os numeros naturais de 1 até N 

x=int(input("Digite um número natural N: "))
soma=0
for i in range(1,x+1):
    if(i!=x):
        print(i,end=" + ")
    soma+=i
    if(i==x):
        print(x,end="")
print(f" || A soma é {soma}",end="")
