import networkx as nx

# 1. Criar um grafo vazio
G = nx.Graph()

# 2. Adicionar conexões (arestas). Os nós são criados automaticamente!
G.add_edges_from([
    ('A', 'B'),
    ('A', 'C'),
    ('B', 'D'),
    ('B', 'E'),
    ('C', 'F'),
    ('E', 'F')
])

# 3. Consultar informações do grafo
print("Nós do grafo:", G.nodes())
print("Arestas do grafo:", G.edges())

# 4. Verificar os vizinhos de um nó específico
print("Vizinhos do nó B:", list(G.neighbors('B')))
