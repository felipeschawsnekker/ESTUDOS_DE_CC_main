#6. Fatorial
i=0
cont=1
x=int(input("Digite um número inteiro: "))
while x>i:
    i=i+1
    if(x!=i):
        print(i,end="x")
    cont=cont*i
    
    
print(x,"=",cont)
