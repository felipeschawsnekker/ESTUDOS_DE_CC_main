# Definindo o grafo como um dicionário
grafo = {
    'A': ['B', 'C'],
    'B': ['A', 'D', 'E'],
    'C': ['A', 'F'],
    'D': ['B'],
    'E': ['B', 'F'],
    'F': ['C', 'E']
}

# Função para exibir o grafo
def mostrar_grafo(g):
    for no, vizinhos in g.items():
        print(f"Nó {no} está conectado a: {', '.join(vizinhos)}")

print("--- Meu Grafo Simples ---")
mostrar_grafo(grafo)
