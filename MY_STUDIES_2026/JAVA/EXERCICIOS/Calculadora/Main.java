/*Utilidade: Crie uma classe Calculadora com métodos para as
quatro operações básicas (somar, subtrair, multiplicar, dividir). */

public class Main {
    public static void main(String [] args){
        Calcular c = new Calcular();
        String x="Resultado: ";
        System.out.println(x +  , c.operacoes(1,5,'+'));
        System.out.println(x + c.operacoes(6,3,'-'));
        System.out.println(x + c.operacoes(3,7,'*'));
        System.out.println(x + c.operacoes(4,5,'/'));
    }
}
