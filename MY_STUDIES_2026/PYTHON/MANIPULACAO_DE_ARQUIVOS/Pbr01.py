# Fazer um programa que separa as palavras de uma frase
# Gravar a frase em um arquivo e ler o arquivo imprimindo as palavras

def separarFrase(num):
    for i in num.split():
        print(i)

x = "Banana maçã laranja uva"

def criarArquivo(nomeDoArquivo, dadosGravados):
    with open(nomeDoArquivo, "w", encoding="utf-8") as arquivoGravado:
        arquivoGravado.write(dadosGravados)

def lerArquivo(nomeDoArquivo):
    with open(nomeDoArquivo, "r", encoding="utf-8") as arquivoLido:
        conteudo = arquivoLido.read()
        print(conteudo)          
        separarFrase(conteudo)   

criarArquivo("Arquivo02.txt", x)
lerArquivo("Arquivo02.txt")
