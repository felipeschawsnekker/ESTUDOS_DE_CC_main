#Escreva um programa que dado três notas, calcule e imprima a média aritmetica

def mediaAritmetica(entradaNota1,entradaNota2,entradaNota3):
    return ((entradaNota1+entradaNota2+entradaNota3)/3)
    
print("Digite três notas!")
a=float(input("Primeira nota: "))
b=float(input("Segunda nota: "))
c=float(input("Terceira nota: "))

print("Média Aritmética das Três notas: ",mediaAritmetica(a,b,c))
