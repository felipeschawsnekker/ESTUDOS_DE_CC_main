#Faça um programa que leia dois números M e N e calcule qual o máximo divisor comum

M=int(input("Digite M: "))
N=int(input("Digite N: "))
Mlista=[]
Nlista=[]
for i in range (1,M+1):
    if(M%i==0):
        Mlista.append(i)
        
for i in range (1,N+1):
    if(N%i==0):
        Nlista.append(i)

print(Nlista)
print(Mlista)

MDC = 0

for i in Mlista:
    if i in Nlista:
        MDC = i

print("Divisores de M:", Mlista)
print("Divisores de N:", Nlista)
print("MDC:", MDC)
        
    

    
