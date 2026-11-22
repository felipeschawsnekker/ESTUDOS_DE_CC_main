def soma(x):
    if x==0:
        return 0
    else:
        return x+soma(x-1)

a=int(input("Digite um número: "))
print(soma(a))
