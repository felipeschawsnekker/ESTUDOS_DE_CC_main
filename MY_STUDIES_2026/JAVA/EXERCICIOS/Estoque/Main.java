/*Crie a classe ItemEstoque:
○ Atributos: nome, quantidade.
○ Métodos: entrar(qtd) e sair(qtd).

Regra: O estoque nunca pode ficar negativo!*/

public class Main {
    public static void main(String[] args){
        Estoque item1 = new Estoque();
        Estoque item2 = new Estoque();
        item1.Entrada("Banana",1750);
        item2.Entrada("Carambola",128);
        item1.Sair("Banana",137);
        item2.Sair("Carambola",76);
        item2.Sair("Xuxu",43);
    }
    
}
