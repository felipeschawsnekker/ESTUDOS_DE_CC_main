#Faça um programa que leia um número N e imprima todos os seus divisores

N=int(input("Digite um número N: "))
lista=[]


for i in range (1,N+1):
    if(N%i==0):
        lista.append(i)
    
print("Lista de divisores: ",lista)
        
