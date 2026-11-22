#04)PRB04 - Ler uma string e imprimir a quantidade de vogais. 
from collections import Counter
x=str(input("Digite uma striing: "))

x=x.lower()
cont=0
funcao_contar_caracteres=Counter(x)
vogais="aeiou"
for caracteres in x:
    if caracteres in vogais:
        cont+=1 
        
print("A quantidade de vogais é: ",cont)
print("====="*10)
print("VOGAIS | APARECE ")
for v in vogais:
    if(funcao_contar_caracteres[v]>0):
        print(f"   {v}   |      {funcao_contar_caracteres[v]}")


