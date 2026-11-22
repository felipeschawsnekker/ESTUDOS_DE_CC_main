
#Crie um programa Python que:
#Crie um banco de dados chamado Escola.db.
#Crie uma tabela chamada alunos com as colunas:
#RA (inteiro, chave primária)
#Nome (texto)
#Media (número decimal)

import sqlite3
import os

banco_de_dados=sqlite3.connect("Escola.db")
criando_cursor=banco_de_dados.cursor()

criando_cursor.execute(''' 
CREATE TABLE IF NOT EXISTS Escola(
ra INTEGER PRIMARY KEY,
nome TEXT NOT NULL,
media REAL NOT NULL
)
'''
                      )
banco_de_dados.commit()
banco_de_dados.close()
