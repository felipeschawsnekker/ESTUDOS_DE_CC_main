def criar_arquivo(nome,dados):
	with open(nome,"w",encoding="utf-8") as x:
		x.write(dados)


def ler_arquivo(nome):
	with open(nome, "r", encoding="utf-8") as b:
		conteudo=b.read()
		print(conteudo)

nome="Arquivo02.txt"
dados="Teste"

criar_arquivo(nome,dados)
ler_arquivo(nome)
