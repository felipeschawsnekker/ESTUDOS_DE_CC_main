package app;
import model.Veiculo;
import model.Carro;
import model.Moto;
import model.Validavel;

public class Main{
    public static void main(String[] args){
        System.out.println("=================ESTACIONAMENTO================");
        //(String modelo, String placa, double entrada)
        Carro carro = new Carro("Porsche", "ABC1234");
        Moto moto = new Moto("Honda", "XYZ5678");

        System.out.println("===== CARRO =====");
        carro.ligar();
        carro.emitirSom();
        System.out.println("Placa válida? " + carro.validarPlaca(carro.getPlaca()));
        carro.Estacionar(10.0);  // Horário de entrada
        carro.Sair(15.0);        // Horário de saída

        System.out.println("===== MOTO =====");
        moto.ligar();
        moto.emitirSom();
        System.out.println("Placa válida? " + moto.validarPlaca(moto.getPlaca()));
        moto.Estacionar(16.0);  // Horário de entrada
        moto.Sair(19.0);        // Horário de saída


    }
}
