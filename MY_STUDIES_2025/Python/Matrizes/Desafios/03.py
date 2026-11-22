import random
matrizes_magicas=[]
i=0

while i<8:
    matriz_linear = [1, 2, 3,
         4, 5, 6,
         7, 8, 9]
    

    random.shuffle(matriz_linear)

    matriz = [matriz_linear[i:i+3] for i in range(0, 9, 3)]
    x=3



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

    
    if todos_iguais:
        # Checar se matriz já está na lista (comparação simples)
        repetida = False
        for m in matrizes_magicas:
            igual = True
            for linha in range(3):
                if m[linha] != matriz[linha]:
                    igual = False
                    break
            if igual:
                repetida = True
                break

        if not repetida:
            matrizes_magicas.append(matriz)
            print(f"Matriz mágica #{len(matrizes_magicas)} encontrada:")
            for linha in matriz:
                print(linha)
            print()
            i += 1
    
        



    

    
        
        
