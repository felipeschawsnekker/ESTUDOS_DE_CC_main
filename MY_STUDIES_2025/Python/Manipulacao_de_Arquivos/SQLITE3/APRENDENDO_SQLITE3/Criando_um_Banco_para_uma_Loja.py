import sqlite3
import sys


def GerarLoja():
    loja=sqlite3.connect("loja.db")
    cursor=loja.cursor()
    
    cursor.execute('''CREATE TABLE IF NOT EXISTS loja(
                    id   INTEGER PRIMARY KEY AUTOINCREMENT,
                    nome TEXT,
                    preco REAL,
                    quantidade INTEGER
                    )''')
    loja.commit()
    loja.close()
    
def InserirLoja():
    loja=sqlite3.connect("loja.db")
    cursor=loja.cursor()
    
    nome=str(input("Digite o nome do produto: "))
    preco=float(input("Digite o valor do produto: R$"))
    quantidade=int(input("Digite a quantidade do produto: "))
    
    cursor.execute(('''INSERT INTO loja (nome,preco,quantidade) VALUES (?,?,?)'''),(nome,preco,quantidade))
    loja.commit()
    loja.close()

def ImprimirLoja():
    loja=sqlite3.connect("loja.db")
    cursor=loja.cursor()
    cursor.execute("SELECT * from loja")
    dados_loja=cursor.fetchall()
    for id, nome, preco, quantidade in dados_loja:
        print(f"\nID {id}")
        print(f"Produto: {nome}")
        print(f"Preço: R${preco}")
        print(f"Quantidade: {quantidade}")
        print("-" * 30)
    loja.close()

def RemoverProdutoLoja():
    loja=sqlite3.connect("loja.db")
    cursor=loja.cursor()
    ImprimirLoja()
    id_produto=int(input("Digite o ID do produto que deseja remover: "))        
    cursor.execute("DELETE FROM loja WHERE id=?",(id_produto,))
    loja.commit()
    loja.close()
    
GerarLoja()
print("\n===============BANCO DE DADOS CRIADO COM SUCESSO=============== \n")

opcao=None
while (opcao!=4):
    opcao=int(input("Escolha uma opção: \n 1- ADICIONAR ITEM \n 2-VISUALIZAR BANCO DE DADOS \n 3- REMOVER ITEM DO BANCO \n 4- SAIR \n"))
    match opcao:
        case 1:
            InserirLoja()
            print("-" * 30)
        case 2:
            ImprimirLoja()
        case 3: 
            RemoverProdutoLoja()
            print("PRODUTO REMOVIDO COM SUCESSO")
        case 4:
            print("SAINDO...")
            sys.exit()
            

    
