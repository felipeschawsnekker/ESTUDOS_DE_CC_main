def sdqp(a,b):
    a,b
    soma=a+b
    diferenca=a-b
    produto=a*b
    quociente=a/b if b!=0 else None
    return soma,diferenca,produto,quociente

a=float(input("Digite o primeiro número: "))
b=float(input("Digite o segundo número: "))

soma,diferenca,produto,quociente=sdqp(a,b)
print("Soma: ",soma)
print("Diferença: ",diferenca)
print("Produto: ", produto)
if b==0:
    print("Quociente: Erro, divisão por zero")
else:
    print("Quociente: ",quociente)
