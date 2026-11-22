package model;
import model.Validavel;

public class Moto extends Veiculo implements Validavel{

    public Moto(String modelo, String placa){
        super(modelo,placa);
    }

    @Override
    public void emitirSom(){
        System.out.println("Bi bi");
    }

    @Override
    public boolean validarPlaca(String placa){
        return placa.length() == 7;
    }
    
    @Override
    public int getValorPorHora(){
        if(getFidelizado()==true){
            System.out.println("Veiculo fidelizado!");
        return 2;
        }
        else{
            return 3;
        }
    }
}
