# Fazer um programa em python para gerar um grafo ponderado
# Que represente uma rede de computadores de um laboratório
# Considere os elementos:
# Vertices: A Servidor / B=Computador01 / C=Computador02 / D=Computador03
# E=Impressora e F=Roteador
# Arestas: AB,AC,AF,BC,BD,CE,EF 
# PESOS: 
# *A-B= 5
# *A-C= 8 
# A-F= 2 
# B-C= 3
# B-D= 7
# C-E= 4 
# E-F= 6 

import networkx as nx
import matplotlib.pyplot as plt

# 1. Criar o grafo não direcionado
G = nx.Graph()

# 2. Adicionar as arestas com os pesos do enunciado: (Origem, Destino, Peso)
conexoes = [
    ('A', 'B', 5),
    ('A', 'C', 8),
    ('A', 'F', 2),
    ('B', 'C', 3),
    ('B', 'D', 7),
    ('C', 'E', 4),
    ('E', 'F', 6)
]
G.add_weighted_edges_from(conexoes)

# 3. Dicionário para mapear as letras aos nomes dos equipamentos nos vértices
nomes_equipamentos = {
    'A': 'Servidor\n(A)',
    'B': 'Computador01\n(B)',
    'C': 'Computador02\n(C)',
    'D': 'Computador03\n(D)',
    'E': 'Impressora\n(E)',
    'F': 'Roteador\n(F)'
}

# 4. Configuração da visualização com Matplotlib
plt.figure(figsize=(9, 7))

# Definir o layout (posicionamento automático dos nós na tela)
pos = nx.spring_layout(G, seed=42)

# Desenhar os nós (vértices)
nx.draw_networkx_nodes(
    G, pos, 
    node_size=3200, 
    node_color='lightblue', 
    edgecolors='black', 
    linewidths=1.5
)

# Desenhar as arestas (conexões)
nx.draw_networkx_edges(
    G, pos, 
    width=2, 
    edge_color='gray'
)

# Exibir os nomes dos equipamentos dentro dos vértices
nx.draw_networkx_labels(
    G, pos, 
    labels=nomes_equipamentos, 
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
plt.title("Rede de Computadores do Laboratório (Grafo Ponderado)", fontsize=12, fontweight='bold')
plt.axis('off')
plt.tight_layout()

# Exibir a janela gráfica
plt.show()
