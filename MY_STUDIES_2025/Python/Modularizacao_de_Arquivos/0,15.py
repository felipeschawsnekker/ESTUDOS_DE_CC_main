def arq(nome,dados):
    with open (nome,"wb") as arquivo:
        arquivo.write(dados.encode())

nome="Pinto"
dados="Banana"

arq(nome,dados)
