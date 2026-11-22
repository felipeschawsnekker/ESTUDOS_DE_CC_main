import sqlite3
import os

def gerabanco():
    conecta=sqlite3.connect("Escola01.db")
    cursor=conecta.cursor()
    
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS ALUNOS (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            nome TEXT NOT NULL,
            idade INTEGER,
            turma TEXT
        )
    ''')

    # Salva as alterações
    conecta.commit()

    # Fecha a conexão
    conecta.close()

# Exemplo de execução
gerabanco()
print("Banco de dados e tabela criados com sucesso!")
