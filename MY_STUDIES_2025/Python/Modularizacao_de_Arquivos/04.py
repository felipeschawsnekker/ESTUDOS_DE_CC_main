def criar_arquivo(nome_do_arquivo,conteudo_do_arquivo):
	with open (nome_do_arquivo,"w",encoding="utf-8") as arquivo:
		arquivo.write(conteudo_do_arquivo)

def ler_arquivo(nome_do_arquivo):
	with open (nome_do_arquivo,"r",encoding="utf-8") as arquivo_lido:
		conteudo=arquivo_lido.read()
		print(conteudo)
def adicionar(nome_do_arquivo,novo_conteudo_adicionado):
	with open(nome_do_arquivo,"a",encoding="utf-8") as new:
	    new.write(novo_conteudo_adicionado)

nome_do_arquivo="Problema 3"
conteudo_do_arquivo="Pera, Abacate, Maracujá"
novo_conteudo_adicionado=", Maçã, Banana, Uva"

criar_arquivo(nome_do_arquivo,conteudo_do_arquivo)
ler_arquivo(nome_do_arquivo)
adicionar(nome_do_arquivo,novo_conteudo_adicionado)
ler_arquivo(nome_do_arquivo)	
