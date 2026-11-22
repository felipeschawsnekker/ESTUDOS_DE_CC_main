print("MATRIZ 3*3: ")
matriz=[]
x=3
for i in range(x):
    linha=[]
    for j in range(x):
        a=float(input(f"[{i}][{j}]: "))
        linha.append(a)
    matriz.append(linha)

print("===MATRIZ 3*3===")
for l in matriz:
    print(l)

#igual a intersecção de números em que a soma de cada coluna, de cada linha e das duas diagonais são iguais
y=[0]*8

# SOMA DAS COLUNAS
for j in range(x):
    for i in range(x):
        y[j] += matriz[i][j]

# SOMA DAS LINHAS
for i in range(x):
    for j in range(x):
        y[i+3] += matriz[i][j]


for i in range(x):
    for j in range(x):
        if i==j:
        #SOMA DIAGONAL PRINCIPAL
            y[6]+=matriz[i][j]
        if i+j==x-1:
            #SOMA DIAGONAL SECUNDARIA
            y[7]+=matriz[i][j]

todos_iguais=True
v=y[0]
for valor in y:
    if valor != v:
        todos_iguais = False
        break


if(todos_iguais==True):
    print("A matriz quadrada é mágica ")
else:
    print("A matriz quadrada NÃO é mágica")
        



    

    
        
        
