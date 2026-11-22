package app;
import model.Veiculo;
import model.Carro;
import model.Moto;

public class Main{
    public static void main(String[] args){
        System.out.println("=================ESTACIONAMENTO================");
        //(String modelo, String placa, double entrada)
        Veiculo[] v= new Veiculo[3];
        v[0]=new Moto("Honda CG", "XYZ-5678");
        v[0].setFidelizado(true); 
        v[0].Estacionar(10.0);
        v[0].Sair(15.0);

        v[1]= new Carro("Porsche Carrera GT", "LU5-48EA");
        v[1].setFidelizado(true);
        v[1].Estacionar(16.0);
        v[1].Sair(19);

        v[2] = new Veiculo("34H-387E");
        v[2].Estacionar(15.0);
        v[2].Sair(18.0);
        

    }
}
