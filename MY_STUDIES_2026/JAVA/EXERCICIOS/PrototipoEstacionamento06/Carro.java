public class Carro extends Veiculo{

    public Carro(String modelo, String placa, double entrada){
        super(modelo,placa,entrada);
    }
    @Override
    public int getValorPorHora(){
        if(getFidelizado()==true){
        System.out.println("Veiculo fidelizado!");
        return 4;
    }
        else{
            return 5;
        }
}
}
