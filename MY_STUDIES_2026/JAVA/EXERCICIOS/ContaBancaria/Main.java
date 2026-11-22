
public class Main {
    public static void main(String[] args){
        Banco pessoa = new Banco();
        pessoa.titular="Felipe";
        pessoa.saldo=1000;
        pessoa.depositar(750);
        pessoa.creditar(275);
        pessoa.exibirSaldo();
    }
    
    
}
