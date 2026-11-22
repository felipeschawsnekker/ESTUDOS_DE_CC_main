#Uma função que necessite de 3 argumentos e forneça sua soma
def soma(a,b,c):
    x=a+b+c
    return x;

a=float(input("Digite o primeiro numero: "))
b=float(input("Digite o segundo numero: "))
c=float(input("Digite o terceiro numero: "))

print("O resultado é: ",soma(a,b,c))
