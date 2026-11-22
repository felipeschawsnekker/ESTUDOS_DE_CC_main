/*Você foi designado para desenvolver o protótipo de um sistema de controle para Estacionamento
O dono do estabelecimento precisa de uma solução simples para registrar a entrada, controlar cobrança.
-> Armazenar as informações básicas do veículo, se está ocupando ou se já saiu
-> Calcular o valor a pagar em um preço p/h 
-> Classe veículo, quais atrtibutos (caracteristicas) sao essenciais para identificar o carro e controlar o tempo/status
-> Defina os tipos de dados adequados (texto, int, float, v ou f)
*/

public class Carro{
    String modelo;
    String cor;
    String placa;
    double tempo_estacionado;
    boolean estacionar;
    double valor_por_hora=5;
    double entrar;
    double sair;
    
    double preco_total;
    int ano;
    
    void Estacionar_Carro(){
        estacionar=true;
        System.out.println("O carro "+ modelo +" entrou, está estacionado");
    }
    void Sair_Carro(){
        estacionar=false;
        tempo_estacionado=sair-entrar;
        preco_total=tempo_estacionado*valor_por_hora;
        System.out.println("O carro "+ modelo + " está saindo");
        
    }
}
