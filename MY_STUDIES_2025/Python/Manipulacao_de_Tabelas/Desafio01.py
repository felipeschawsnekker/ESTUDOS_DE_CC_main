import sqlite3

def GeraBanco():
    conecta = sqlite3.connect('Escola02.db')
    cursor = conecta.cursor()

    cursor.execute('''CREATE TABLE IF NOT EXISTS Alunos(
                        RA INTEGER PRIMARY KEY,
                        NOME VARCHAR(30) NOT NULL,
                        SEXO CHAR(1) NOT NULL CHECK (SEXO IN ('M','F')),
                        MEDIA REAL)''')
    conecta.commit()
    conecta.close()
    print("Banco e tabela criados com sucesso!")

def Gravar():
    conecta = sqlite3.connect('Escola02.db')
    cursor = conecta.cursor()
    cursor.execute('''INSERT INTO Alunos (RA, NOME, SEXO, MEDIA)
                      VALUES (1, 'Maria', 'F', 8.5)''')
    conecta.commit()
    conecta.close()
    print("Aluno gravado com sucesso!")

def Imprimir():
    conecta = sqlite3.connect('Escola02.db')
    cursor = conecta.cursor()
    cursor.execute('SELECT RA, NOME, SEXO, MEDIA FROM Alunos ORDER BY RA ASC')

    print("\n======= RELAÇÃO DE ALUNOS =======")
    for X in cursor.fetchall():
        print(X[0], X[1], X[2], X[3])
    print("=================================\n")

    conecta.close()

# executando as funções
GeraBanco()
Gravar()
Imprimir()
