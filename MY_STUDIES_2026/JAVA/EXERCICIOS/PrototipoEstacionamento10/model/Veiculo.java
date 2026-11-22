 package model;
/*

Exercício
Aula 10

● A Interface Validavel:
○ Crie uma interface chamada Validavel com o seguinte contrato:
○ Método: boolean validarPlaca(String placa);
● As Classes Filhas (Carro e Moto):
○ As classes Carro e Moto devem herdar de Veiculo e
implementar a interface Validavel.
Exercício
Aula 10
No Carro: O método emitirSom deve exibir "Vrum Vrum". O validarPlaca
retorna true se a placa tiver exatamente 7 caracteres.
Na Moto: O método emitirSom deve exibir "Bi Bi". O validarPlaca retorna
true se a placa tiver exatamente 7 caracteres.
Exercício
Aula 10
No método main:
Tente instanciar um objeto do tipo Veiculo e observe o erro de
compilação.
Instancie um Carro e uma Moto.
Chame os métodos ligar(), emitirSom() e exiba o resultado da validação da
placa para ambos. */
public abstract class Veiculo{
    protected String placa;
    private String modelo;
    private double total,entrada,saida;
    private int valor_por_hora=4;
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

    public String getPlaca() { return this.placa; }
    public String getModelo() { return this.modelo; }
    public double getEntrada() { return this.entrada; }
    public double getSaida() { return this.saida; }
    public boolean isEstacionado() { return this.status; }
    public boolean isFidelizado() { return this.fidelizado; }


    public void setFidelizado(boolean fidelizado) {
    this.fidelizado = fidelizado;
}
    public Veiculo(String modelo, String placa){
    this.modelo = modelo;
    this.placa = placa;
    this.status = false; 
    this.fidelizado = false;
}

public Veiculo(String placa) {
    this("Generico", placa); 
}

    public void ligar(){
        System.out.println("O veiculo esta ligado");
    }

    public abstract void emitirSom();
    public void Estacionar(double entrada){
        this.entrada=entrada;
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

    
    
    
        




    
