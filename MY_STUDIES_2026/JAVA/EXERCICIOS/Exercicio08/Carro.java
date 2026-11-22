public class Carro extends Veiculo {

    public Carro(String modelo, String placa, double valorHora, double cupom) {
        super(modelo, placa, valorHora, cupom);
    }

    @Override
    public double calcularPagamento(int tempo) {
        return tempo * getValorHora();
    }
}
