import sqlite3
import os 
import sys


def GerarLoja():
    loja=sqlite3.connect("loja.db")
    cursor=loja.cursor()
    
    cursor.execute('''CREATE TABLE IF NOT EXISTS loja(
                    id INTEGER PRIMARY KEY
                    )''')
    loja.commit()
    loja.close()
    
GerarLoja()
print("Banco criado com sucesso")
    


    
