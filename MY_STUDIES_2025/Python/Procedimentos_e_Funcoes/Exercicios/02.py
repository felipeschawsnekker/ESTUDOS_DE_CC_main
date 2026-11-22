#Faça umprograma com uma função que necessite de um argumento. Retorna P se for positivo e N se for negativo ou nulo
def teste(x):
    if(x>0):
        resultado='P'
    else:
        resultado='N'
    return resultado

x=float(input("Digite X: "))
print(teste(x))

    
