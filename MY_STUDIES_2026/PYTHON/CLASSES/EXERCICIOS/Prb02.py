#Criar uma classe bola, que tenha como atributos: cor, circunferencia e material
#Com metodos trocarCOR e mostrarCor


class Bola:
    def __init__(self,cor,circunferencia,material):
        self._cor=cor
        self._circunferencia=circunferencia
        self._material=material
        
    def trocarCor(self,novaCor):
        print(f"A cor foi trocada, a antiga cor é: {self._cor}")
        self._cor=novaCor
    
    def mostrarCor(self):
        print(f"A nova cor é: {self._cor}")
        return self._cor
        

myBall=Bola("Azul",0.5,"Borracha")
myBall.trocarCor("Vermelho")
myBall.mostrarCor()
