import sqlite3
import os


def gerabanco():
    conecta=sqlite3.connect("Escola01.db")
    cursor=conecta.cursor()
    
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS ALUNOS (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            RA TEXT NOT NULL,
            Media INTEGER,
            Nome TEXT
        )
    ''')

    # Salva as alterações
    conecta.commit()

    # Fecha a conexão
    conecta.close()

def gravar(RA,Nome,Media):
    try:
        conecta=sqlite3.connect('Escola01.db')
        cursor=conecta.cursor()
        cursor.execute('''INSERT INTO ALUNOS
                        (RA,Nome,Media) 
                        VALUES (?,?,?)''',(RA,Nome,Media))
        conecta.commit()
        conecta.close()
    except Exception as Erro:
        print(Erro)
        
def Imprimir():
    
    conecta=sqlite3.connect('Escola01.db')
    cursor=conecta.cursor()
    cursor.execute('''SELECT RA,Nome,Media FROM ALUNOS ORDER BY RA ASC''')
    print("Relação: ")
    
    print("{:>12} {:<25} {:>12}".format("RA","Nome","Media"))
    print("{:>12} {:<25} {:>12}".format("-"*12,"-"*25,"-"*12))
    for x in cursor.fetchall():
        print(("{:>12} {:<25} {:>12}").format(x[0],x[1],x[2]))

    print("="*50)

gerabanco()
gravar("456","Maria",6)
gravar("321","Felipe",10)
gravar("123","Junior",7)
gravar("789","Tavel",3)
Imprimir()
    
