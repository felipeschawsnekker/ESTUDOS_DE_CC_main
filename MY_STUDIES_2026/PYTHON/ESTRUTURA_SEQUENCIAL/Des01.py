#Faça um programa que determine todos os numeros perfeitos menores que um numero lido

#Numero perfeito = Soma dos divisores = Numero ele.

def perfectNumber(num):
    soma=-num
    lista=[]
    for i in range(1,num+1):
        if(num%i==0):
            
            soma=soma+i
            if(num!=i):
                lista.append(i)
    
    if(soma==num):
        print("Este número é perfeito!")
        print("Seus divisores são: ",lista)
        print("A soma é: ",soma)
    else:
        print("Este número não é perfeito")
        print("Seus divisores são: ",lista)
        print("A soma é: ",soma)
        
x=int(input("\nDigite um numero: "))
perfectNumber(x)
