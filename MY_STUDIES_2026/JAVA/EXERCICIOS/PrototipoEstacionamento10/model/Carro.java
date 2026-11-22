package model;
import model.Validavel;

public class Carro extends Veiculo implements Validavel{

    public Carro(String modelo, String placa){
        super(modelo,placa);
    }

    @Override
    public void emitirSom(){
        System.out.println("Vrum Vrum");
    }

    @Override
    public boolean validarPlaca(String placa){
        return placa.length() == 7;
    }
    
    @Override
    public int getValorPorHora(){
        if(getFidelizado()==true){
            System.out.println("Veiculo fidelizado!");
        return 3;
        }
        else{
            return 4;
        }
    }
}
