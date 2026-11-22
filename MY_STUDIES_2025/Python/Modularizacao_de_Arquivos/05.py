def criar_arquivo(nome_do_arquivo,nome_dos_individuos):
	with open(nome_do_arquivo,"w",encoding="utf-8") as arquivo:
		arquivo.write(nome_dos_individuos+",")

def ler_arquivo(nome_do_arquivo):
	with open (nome_do_arquivo,"r",encoding="utf-8") as arquivo:
		conteudo=arquivo.read()
		print(conteudo," ")
def adicionar(nome_do_arquivo,novo_nome):
	with open (nome_do_arquivo,"a",encoding="utf-8") as arquivo:
		arquivo.write(novo_nome + ",")

nome_do_arquivo="Teste 1"
nome_dos_individuos={}
for i in range(0,3):
	nome_dos_individuos[i]=str(input(f"Digite o nome {i+1}: "))

criar_arquivo(nome_do_arquivo,nome_dos_individuos[0])

for i in range(1,3):
	adicionar(nome_do_arquivo,nome_dos_individuos[i])

ler_arquivo(nome_do_arquivo)

