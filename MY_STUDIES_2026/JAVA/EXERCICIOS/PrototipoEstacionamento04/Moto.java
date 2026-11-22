public class Moto extends Veiculo{
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
