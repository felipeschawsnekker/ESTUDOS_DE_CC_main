#Faça um programa que gera uma matriz 3x3 de inteiros aleatoriose imprima os elementos:
#a)Da diagonal principal
#b) Da diagonal secundária
#c) Acima da diagonal principal

linha=2
coluna=2
matriz=[]
for i in range (linha):
    linha=[]
    for j in range (coluna):
        valor=int(input(f"[{i}][{j}]:" ))
        linha.append(valor)
    matriz.append(linha)
    

for l in matriz:
    print (l)
    
        

    
    
