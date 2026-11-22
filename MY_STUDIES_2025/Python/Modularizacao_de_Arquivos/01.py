  def criar(arq,dados):
    with open (arq,"wb") as arq_bin:
        arq_bin.write(bytearray(dados))
        print(f"Arquivo {arq} criado com sucesso")
        
arq="Primeiro arquivo.bin"
dados=[1,2,3,4,5,6]

criar(arq,dados)
