
public class Veiculo {
    // ATRIBUTOS
    private String placa;
    public String getPlaca(){
        return this.placa;
    }
    
    private String modelo;
    public String getModelo(){
        return this.modelo;
    }
    
    private double valorHora; // Cada objeto tera seu proprio valor aqui
    public double getValorHora(){
        return this.valorHora;
    }
    
    
    private double cupomDesconto;
    public double getCupomDesconto(){
        return this.cupomDesconto;
    }
    
    private boolean estaEstacionado;
    public boolean isEstaEstacionado(){
        return this.estaEstacionado;
    }
    private double valorUltimoPagamento;
    private int horaEntrada;
    
    

    // CONSTRUTOR
    public Veiculo(String modelo, String placa, double valorHora, double cupom) {
        this.modelo = modelo;
        this.placa = placa;
        this.valorHora = valorHora;
        this.cupomDesconto = cupom;
        this.estaEstacionado = false; // Comeca fora do patio
    }
    
   
    // METODO 1: Registra entrada
    void registrarEntrada(int hora) {
        this.horaEntrada = hora;
        this.estaEstacionado = true;
        System.out.println(">>> Entrada: " + modelo + " (Placa: " + placa + ") as " + hora + "h.");
    }

    // METODO 2: Valida e calcula a saída
    double finalizarHospedagem(int horaSaida) {
        if (!estaEstacionado) {
            System.out.println("ERRO: O veiculo " + modelo + " nao esta no patio!");
            return 0.0;
        }

        if (horaSaida < horaEntrada) {
            System.out.println("ERRO: Hora de saida invalida para " + modelo);
            return 0.0;
        }

        int tempoPermanencia = horaSaida - horaEntrada;
        // Aqui o calculo usa o valorHora especifico deste objeto (Carro ou Moto)
        double total = (tempoPermanencia * this.valorHora) - this.cupomDesconto;

        if (total < 0) total = 0;

        this.valorUltimoPagamento = total;
        this.estaEstacionado = false;
        return total;
    }

    // METODO 3: Relatorio
    void imprimirRelatorio() {
        System.out.println("--- RELATORIO: " + modelo + " ---");
        System.out.println("Tabela Preco/Hora: R$ " + valorHora);
        System.out.println("Desconto aplicado: R$ " + cupomDesconto);
        System.out.println("VALOR TOTAL PAGO: R$ " + valorUltimoPagamento);
        System.out.println("------------------------------\n");
    }
}
