#retorna um valor de caractepre P se for positivo e N se for zero ou negativo

def retornaCaracter(num):
    a='P'
    b='N'
    if(num>0):
        return a 
    elif(num<=0):
        return b
    else:
        print("Digite um número válido")
        return 0

valor1=retornaCaracter(-30)
valor2=retornaCaracter(10)
valor3=retornaCaracter(0)

print(f"Valor 1: {valor1}")
print(f"Valor 2: {valor2}")
print(f"Valor 3: {valor3}")
