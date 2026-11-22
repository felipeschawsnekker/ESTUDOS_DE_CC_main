from tkinter import *


class Ex02:

  def __init__(self, App):
    self.App = App
    self.App.title("Exemplos")
    self.App.geometry("1080x650+200+100")  # Corrigido 'K' para 'x'

    F1 = Frame(self.App, bd=10, width=900, height=600, relief=RIDGE)
    F1.grid(padx=60, pady=20)

    Ftit = Frame(F1, bd=5, width=910, height=100, relief=RIDGE)
    Ftit.grid(row=0, column=0, sticky=W)

    Fmsg = Frame(F1, bd=5, width=900, height=70, relief=RIDGE)
    Fmsg.grid(row=1, column=0, sticky="w")  # alinhar a esquerda

    Fdado = Frame(F1, bd=5, width=900, height=300, relief=RIDGE)
    Fdado.grid(row=2, column=0, sticky="w")

    FdadoE = Frame(Fdado, bd=5, width=310, height=300, relief=RIDGE)
    FdadoE.grid(row=0, column=0, sticky="w")

    FdadoD = Frame(Fdado, bd=5, width=590, height=300, relief=RIDGE)
    FdadoD.grid(row=0, column=1, pady=2)  # Corrigido 'pady2' para 'pady'

    Fbotoes = Frame(F1, bd=5, width=910, height=90, relief=RIDGE)  # Corrigido 'f1' para 'F1' e 'IDGE' para 'RIDGE'
    Fbotoes.grid(row=3, column=0)  # Corrigido 'colmim=' para 'column=0'


# Inicialização e execução da aplicação
root = Tk()
app = Ex02(root)
root.mainloop()
