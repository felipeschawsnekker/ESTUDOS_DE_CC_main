#Faça um programa que receba o numero de lados de um poligono e mostre o numero 
#de Diagonais

def geraDiagonais(numeroDeLados):
    if(numeroDeLados>=3):
        return numeroDeLados*(numeroDeLados-3)/2
    else:
        print("Digite um número de lados maior ou igual a 3")
    
lados=int(input("Digite o número de lados de seu polígono: "))
print("Número de diagonais: ",geraDiagonais(lados))
    
    
