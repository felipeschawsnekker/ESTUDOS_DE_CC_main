#05)PRB05 - Ler uma string e imprimir a quantidade de consoantes. 
from collections import Counter
x=str(input("Digite uma striing: "))

x=x.lower()
cont=0
funcao_contar_caracteres=Counter(x)
vogais="aeiou"

for caracteres in x:
    if (caracteres not in vogais and caracteres.isalpha()):
        cont+=1 
        
print("A quantidade de consoantes é: ",cont)
print("====="*10)
print("CONSOANTES | APARECE ")
for v in x:
    if(funcao_contar_caracteres[v]>0 and v not in vogais and v.isalpha()):
        print(f"   {v}   |      {funcao_contar_caracteres[v]}")


