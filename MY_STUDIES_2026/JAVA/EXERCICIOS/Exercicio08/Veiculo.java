public abstract class Veiculo {

    private String modelo;
    private String placa;
    private double valorHora;
    private double cupomDesconto;
    private boolean estaEstacionado;
    private int horaEntrada;
    private double valorUltimoPagamento;

    public Veiculo(String modelo, String placa, double valorHora, double cupomDesconto) {
        this.modelo = modelo;
        this.placa = placa;
        setValorHora(valorHora);
        setCupomDesconto(cupomDesconto);
        this.estaEstacionado = false;
    }

    public String getModelo() { return modelo; }
    public String getPlaca() { return placa; }
    public double getValorHora() { return valorHora; }
    public double getCupomDesconto() { return cupomDesconto; }
    public boolean isEstaEstacionado() { return estaEstacionado; }

    public void setValorHora(double valorHora) {
        if (valorHora > 0) {
            this.valorHora = valorHora;
        }
    }

    public void setCupomDesconto(double cupomDesconto) {
        if (cupomDesconto >= 0 && cupomDesconto <= 50) {
            this.cupomDesconto = cupomDesconto;
        }
    }

    public void registrarEntrada(int hora) {
        this.horaEntrada = hora;
        this.estaEstacionado = true;
    }

    public double finalizarHospedagem(int horaSaida) {
        if (!estaEstacionado) return 0;
        if (horaSaida < horaEntrada) return 0;

        int tempo = horaSaida - horaEntrada;
        double total = calcularPagamento(tempo) - cupomDesconto;
        if (total < 0) total = 0;

        this.valorUltimoPagamento = total;
        this.estaEstacionado = false;
        return total;
    }

    public void imprimirRelatorio() {
        System.out.println("\n--- " + modelo + " ---");
        System.out.println("Placa: " + placa);
        System.out.println("Total pago: R$ " + valorUltimoPagamento);
    }

    public abstract double calcularPagamento(int tempo);
}
