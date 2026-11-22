public class Veiculo {
    String modelo;
    String placa;
    String cor;
    int ano;
    int temp;
    int taxa;
    
    public Veiculo(String modelo, String placa, String cor, int ano, int temp){
        this.modelo=modelo;
        this.placa=placa;
        this.cor=cor;
        this.ano=ano;
        this.temp=temp;
    }
    
    double Estacionamento(){
        return temp*taxa;
    }
}
