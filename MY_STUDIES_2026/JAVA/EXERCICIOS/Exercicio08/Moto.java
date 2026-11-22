public class Moto extends Veiculo {

    public Moto(String modelo, String placa, double valorHora, double cupom) {
        super(modelo, placa, valorHora, cupom);
    }

    @Override
    public double calcularPagamento(int tempo) {
        double total = tempo * getValorHora();
        if (tempo < 2) total = total / 2;
        return total;
    }
}
