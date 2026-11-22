# Lista
L = [-10, 90, 50, 40]

try:
    L[2] = 89
    print("Lista alterada:", L)
except Exception as e:
    print("Erro ao alterar a lista:", e)

# Tupla
T = (-10, 90, 50, 40)

try:
    T[2] = 89  # Isso gera erro
    print("Tupla alterada:", T)
except Exception as e:
    print("Erro ao alterar a tupla:", e)
