#Fazer um programa em python para gerar um grafo ponderado
#Que represente uma rede de computadores de um laboratório
#Considere os elementos:
#Vertices: A: ANALISE, B: PROJETO, C: BANCO DE DADOS, D: PROGRAMAÇÃO
#E=TESTES, F =DOCUMENTAÇÃO
#Arestas: AB,AC,AF,BC,BD,CE,EF 
#PESOS: 
#*A-B= 4 
#*A-C= 3 
#A-F= 2 
#B-C= 6 
#B-D= 5
#C-E= 4 
#E-F= 2

import networkx as nx
import matplotlib.pyplot as plt

# 1. Criar o grafo não direcionado
G = nx.Graph()

# 2. Adicionar as arestas com os novos pesos do enunciado: (Origem, Destino, Peso)
conexoes = [
    ('A', 'B', 4),
    ('A', 'C', 3),
    ('A', 'F', 2),
    ('B', 'C', 6),
    ('B', 'D', 5),
    ('C', 'E', 4),
    ('E', 'F', 2)
]
G.add_weighted_edges_from(conexoes)

# 3. Dicionário para mapear as letras aos nomes dos elementos nos vértices
nomes_vertices = {
    'A': 'ANALISE\n(A)',
    'B': 'PROJETO\n(B)',
    'C': 'BANCO DE DADOS\n(C)',
    'D': 'PROGRAMAÇÃO\n(D)',
    'E': 'TESTES\n(E)',
    'F': 'DOCUMENTAÇÃO\n(F)'
}

# 4. Configuração da visualização com Matplotlib
plt.figure(figsize=(10, 8))

# Definir o layout (posicionamento automático dos nós na tela)
pos = nx.spring_layout(G, seed=42)

# Desenhar os nós (vértices)
nx.draw_networkx_nodes(
    G, pos, 
    node_size=3800, 
    node_color='lightyellow', 
    edgecolors='black', 
    linewidths=1.5
)

# Desenhar as arestas (conexões)
nx.draw_networkx_edges(
    G, pos, 
    width=2, 
    edge_color='gray'
)

# Exibir os nomes dos elementos dentro dos vértices
nx.draw_networkx_labels(
    G, pos, 
    labels=nomes_vertices, 
    font_size=9, 
    font_weight='bold'
)

# Extrair e desenhar os pesos sobre as arestas
pesos_arestas = nx.get_edge_attributes(G, 'weight')
nx.draw_networkx_edge_labels(
    G, pos, 
    edge_labels=pesos_arestas, 
    font_size=11, 
    font_color='red', 
    font_weight='bold'
)

# Título e ajustes finais
plt.title("Grafo Ponderado - Fases do Sistema", fontsize=13, fontweight='bold')
plt.axis('off')
plt.tight_layout()

# Exibir a janela gráfica
plt.show()
