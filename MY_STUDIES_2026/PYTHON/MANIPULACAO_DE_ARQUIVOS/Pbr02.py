# Gravar os resultados de uma calculadora simples em um arquivo

def gerarArquivo(nomeDoArquivo):
    try:
        with open(nomeDoArquivo,"x",encoding="utf-8") as arquivo:
            pass
        print(f"Arquivo criado com sucesso! - Nome do Arquivo: {nomeDoArquivo}")
    except FileExistsError:
        print(f"O arquivo {nomeDoArquivo} já existe!")

def gravarArquivo(nomeDoArquivo,dados):
    with open(nomeDoArquivo,"w",encoding="utf-8") as arquivo:
        arquivo.write(dados)
        
def calcular(primeiroNumero,segundoNumero,sinal):
    match sinal:
        case '+':
            return (primeiroNumero)+(segundoNumero)
        case '-':
            return (primeiroNumero)-(segundoNumero)
        case '*':
            return (primeiroNumero)*(segundoNumero)
        case '/':
            if(segundoNumero !=0):
                return (primeiroNumero)/(segundoNumero)
            else:
                print("Impossível dividir por 0!")
                return 0
        case '^':
            return primeiroNumero**segundoNumero
        case _:
            print("Operador Inválido!")
            
        
gerarArquivo("Calculadora Virtual")
gravarArquivo("Calculadora Virtual",str(calcular(40,0.5,'/')))
