#Classe Retangulo. Crie uma classe que modele um Retangulo
#Atributos: Largura, Altura
#Metodo: mudar valor dos lados, retornar valor dos dados, calcular área e perimetro
#O usuario deve informar os valores.

class Retangulo:
    def __init__(self,altura,largura):
        if((altura is not None and largura is not None and altura>0 and largura>0) or ((altura is None and largura is None))):
            self._altura=altura
            self._largura=largura
        else:
            print("Digite valores válidos")
            return 
        
    def mostrarValorDosLados(self):
        print(f"Valor da altura: {self._altura}")
        print(f"Valor da largura: {self._largura}")
        return self._altura,self._largura
        
    def calcularArea(self):
        tempArea=(self._altura*self._largura)
        print(f"A área do retângulo é: {tempArea}")
        return tempArea
        
    def calcularPerimetro(self):
        tempPerimetro=2*(self._altura+self._largura)
        print(f"O perímetro do retângulo é: {tempPerimetro}")
        return tempPerimetro
        
    def mudarAltura(self,novaAltura):
        print("Alterando altura")
        self._altura=novaAltura
        return self._altura 
        
    def mudarLargura(self,novaLargura):
        print("Alterando largura")
        self._largura=novaLargura
        return self._largura

myRetangulo=Retangulo(None,None)

def verificaNone(retangulo):
    if(retangulo._altura==None or retangulo._largura==None):
        print("Preencha com valores válidos")
        return False
    else:
        return True
        
while(True):
    print("OPCAO 1 - DEFINIR ALTURA E LARGURA")
    print("OPCAO 2 - MOSTRAR VALOR DOS LADOS: ")
    print("OPCAO 3 - MOSTRAR AREA: ")
    print("OPCAO 4 - MOSTRAR PERIMETRO: ")
    print("OPCAO 5 - MUDAR ALTURA: ")
    print("OPCAO 6 - MUDAR LARGURA: ")
    print("OPCAO 7 - SAIR")
    value=int(input("DIGITE A OPCAO: "))
    
    if (value==1):
        altura=float(input("ALTURA: "))
        largura=float(input("LARGURA: "))
        myRetangulo=Retangulo(altura,largura)
        
    elif (value==2):
        if(verificaNone(myRetangulo)==True):
            myRetangulo.mostrarValorDosLados()
            
    elif (value==3):
        if(verificaNone(myRetangulo)==True):
            myRetangulo.calcularArea()
            
    elif (value==4):
        if(verificaNone(myRetangulo)==True):
            myRetangulo.calcularPerimetro()
    
    elif (value==5):
        if(verificaNone(myRetangulo)==True):
            x=float(input("DIGITE A NOVA ALTURA: "))
            myRetangulo.mudarAltura(x)
            
    elif (value==6):
        if(verificaNone(myRetangulo)==True):
            x=float(input("DIGITE A NOVA LARGURA: "))
            myRetangulo.mudarLargura(x)
    
    elif (value==7):
        print("SAINDO...")
        break
        
    else:
        print("DIGITE UM VALOR VÁLIDO")
