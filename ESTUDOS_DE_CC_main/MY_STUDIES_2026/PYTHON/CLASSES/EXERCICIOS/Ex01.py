

class Pessoa:
    def __init__(self,nome,idade,altura):
        self.nome=nome
        self.idade=idade
        self.altura=altura
    
    def Saudacao(self):
        print(f"Saudação: {self.nome}")
        
    def DadosPessoais(self):
        print("Dados pessoais: {} , {} anos, Altura: {}m".format(self.nome,self.idade,self.altura))
        


pessoa1=Pessoa("Vitor",18,1.65)
pessoa1.Saudacao()
pessoa1.DadosPessoais()
        
