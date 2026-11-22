package model;


public class Moto extends Veiculo{

    public Moto(String modelo, String placa){
        super(modelo,placa);
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
