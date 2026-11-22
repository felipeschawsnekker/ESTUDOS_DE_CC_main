#Faça uma função que retorne a soma de 3 elementos

def geraSoma(a,b,c):
    return a+b+c
    
a=float(input("Digite o primeiro numero: "))
b=float(input("Digite o segundo numero: "))
c=float(input("Digite o terceiro numero: "))

temp=geraSoma(a,b,c)

print(f"Seu resultado é: {temp}")
