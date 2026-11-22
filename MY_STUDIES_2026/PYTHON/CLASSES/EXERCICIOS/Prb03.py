#Criar uma classe quadrado, que tenha como atributo o tamanho do lado
#Método: mudar lado, retornar valor do lado e calcular área

class Square:
    def __init__(self,lado):
        if(lado>0):
            self._lado=lado
        else:
            print("Digite um valor válido")
            return 
        
    def mudarLado(self,novoLado):
        print(f"Lado antigo: {self._lado}")
        self._lado=novoLado
        print("O lado do quadrado foi alterado")
        
    def mostrarLado(self):
        print(f"O novo lado é: {self._lado}")
        return self._lado
    
    def calcularArea(self):
        tempArea=self._lado**2
        print(f"A área do quadrado é: {tempArea}")
        return tempArea
        
mySquare=Square(8)
mySquare.mudarLado(5)
mySquare.mostrarLado()
mySquare.calcularArea()
        
    
