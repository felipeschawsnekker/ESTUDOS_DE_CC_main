#Prb10 Faça um programa para ler um numero N e verificar se ele é primo

N=int(input("Digite um número N: "))

divisor=0
for i in range(1,N+1):
    if(N%i==0):
        divisor+=1

if(divisor==2):
    print(f"O número {N} é primo")
else:
    print(f"O número {N} não é primo")
        
        
