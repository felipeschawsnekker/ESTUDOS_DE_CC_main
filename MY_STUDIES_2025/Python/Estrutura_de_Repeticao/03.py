#Peça ao usuário um número N e calcule a soma de todos os números de 1 até N.

cont=0
x=int(input("Digite um número N: "))
for i in range (1,(x+1)):
    cont = cont+i
    
print("O resultado é: ",cont)    
