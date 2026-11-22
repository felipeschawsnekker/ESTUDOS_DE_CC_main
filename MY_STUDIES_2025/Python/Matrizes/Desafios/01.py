print("Digite as proporções de sua matriz A (m*n):")
m = int(input("m: "))
n = int(input("n: "))

print("Digite as proporções da matriz B (n*p): ")
p= int(input("p: "))

a=[]
b=[]
print("\n===MATRIZ A===\n")
for i in range (m):
    linha=[]
    for j in range (n):
        m_a=float(input(f"[{i}][{j}]: "))
        linha.append(m_a)
    a.append(linha)

print("\n===MATRIZ B===\n")
for i in range(n):
    linha=[]
    for j in range(p):
        m_b=float(input(f"[{i}][{j}]: "))
        linha.append(m_b)
    b.append(linha)
    
    

print("\n===MATRIZ A===\n")
for l in a:
    print(l)
    

print("\n===MATRIZ B===\n")
for l in b:
    print(l)

matriz = []
for i in range(m):
    linha = []
    for j in range(p):
        linha.append(0)
    matriz.append(linha)

for i in range(m):
    for j in range(p):
        for k in range(n):
            matriz[i][j]+=a[i][k]*b[k][j]
print("\n===MATRIZ A*B===\n")
for l in matriz:
    print(l)
            
