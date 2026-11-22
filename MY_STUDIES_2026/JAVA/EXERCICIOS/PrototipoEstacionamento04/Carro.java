public class Carro extends Veiculo{
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
