import sqlite3
import os
import sys
opcao=input("ESCOLHA UMA OPÇÃO: 1 ou 2 \n 1-CRIAR BANCO E INSERIR DADOS \n 2-SAIR \n")

match opcao:
    case "1":
        print("CONTINUANDO...")
    case "2":
        sys.exit()
    
def GeraBanco():
    banco=sqlite3.connect("Funcionario02.db")
    cursor=banco.cursor()

    cursor.execute('''CREATE TABLE IF NOT EXISTS Funcionario02(
    codigo INTEGER PRIMARY KEY,
    nome TEXT NOT NULL,
    sexo TEXT NOT NULL,
    salario INTEGER
    
    )''')
    
    banco.commit()
    banco.close()

def InserirBanco():
    banco=sqlite3.connect("Funcionario02.db")
    cursor=banco.cursor()

    codigo=int(input("CÓDIGO: "))
    nome=str(input("NOME: "))
    sexo=str(input("SEXO: "))
    salario=int(input("SALARIO: "))
    
    cursor.execute(('''INSERT INTO Funcionario02 (codigo,nome,sexo,salario)
        VALUES (?,?,?,?)'''
        ),(codigo,nome,sexo,salario))
        
    banco.commit()
    banco.close()

GeraBanco()
InserirBanco()


    
            
