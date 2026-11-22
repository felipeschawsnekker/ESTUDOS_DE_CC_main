/*Crie uma classe ContaBancaria com os atributos titular e saldo.
○ Crie três métodos: depositar(double valor), creditar(double
valor) e exibirSaldo().*/

public class Banco{
    String titular;
    double saldo=0;

    double depositar(double valor){
        return (saldo+=valor);
    }
    double creditar(double valor){
        if(saldo>=valor){
            return (saldo-=valor);
        }
        else{
            System.out.println("Saldo insuficiente");
        }
        return saldo;
    }

    void exibirSaldo(){
        System.out.println("Titular: " + titular);
        System.out.println("Saldo: " + saldo);
    }
}
