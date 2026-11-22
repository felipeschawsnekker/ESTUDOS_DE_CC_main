/* Objetivo:
Desenvolver um sistema simples em Java para registrar veículos em um estacionamento e calcular o valor a pagar com base no tempo.
Passos principais:
Modelagem do veículo:
Criar uma classe Veículo com atributos essenciais:
Placa ou identificação (String)
Tipo de veículo (carro, moto)
Hora de entrada (int ou double)
Hora de saída (int ou double)
Status de estacionamento (boolean)
Comportamentos (métodos):
Entrada: registrar dados do veículo e atualizar status para estacionado = true.
Saída: calcular valor a pagar baseado em horas e preço por hora, atualizar status para false.
Exibir dados: imprimir informações do veículo e recibo.
Validações:
Não permitir hora de saída menor que a entrada → retorna 0 e exibe erro.
Só finalizar se estacionado == true.
Regras adicionais (desafios):
Diferenciar valores por tipo de veículo (carro, moto).
Aplicar desconto para clientes fidelizados.
Garantir que o estoque de vagas/tempo não fique inconsistente.
Demonstração:
Criar pelo menos dois veículos diferentes.
Mostrar recibo com dados e valor total. */

public class Veiculo{
    private String placa;
    private String modelo;
    private double total,entrada,saida;
    private int valor_por_hora=0;
    private static int VeiculosAtuais=0;
    private static final int LimiteVagas=6;
    boolean status;
    boolean fidelizado;

    public int getValorPorHora(){
        return this.valor_por_hora;
    }
    //getter
    public boolean getFidelizado(){
        return this.fidelizado;
    }

    public void setFidelizado(boolean fidelizado) {
    this.fidelizado = fidelizado;
}
    public Veiculo(String modelo, String placa, double entrada){
    this.modelo = modelo;
    this.placa = placa;
    this.entrada = entrada;
    this.status = false; 
    this.fidelizado = false;
}
    public void Estacionar(){
        if(VeiculosAtuais<LimiteVagas){
        VeiculosAtuais++;
        this.status=true;
        System.out.println("O modelo "+this.modelo+",com placa "+this.placa+" estacionou! Entrada: "+this.entrada+"h");
        }
        else{
            System.out.println("Limite de veiculos estacionados");
            return;
        }
        

    }

    public void Sair(double saida) {
    if(!status) {
        System.out.println("Este veículo não está estacionado!");
        return;
    }
    this.saida = saida;
    total = saida - entrada;

    System.out.println("O modelo " + this.modelo + ", com placa " + this.placa + " saiu! Saída: " + this.saida + "h");
    if(total >= 0) {
        double valor = this.total * getValorPorHora();
        System.out.println("Horário de permanência: " + this.total + "h | Valor a ser pago: " +"R$"+valor+"\n");
        this.status = false;
        VeiculosAtuais--;
    } else {
        System.out.println("Horário inválido");
    }
}

    }
    
    
        




    
