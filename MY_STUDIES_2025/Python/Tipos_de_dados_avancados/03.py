
from collections import Counter
x=str(input("Digite uma string (max:50 caracteres): "))[:50]

q=len(x)

print("Quantidade de caracteres: ",q)

print("="*20)
print("Caracteres separados")
for c in x:
    print (c)
    
print("="*20)

f=Counter(x)
print("Caractere | Quantidade")
print("-"*20)
for c, qtd in f.items():
    print(f"|   {c}    |     {qtd} |")
print("-"*20)
