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
Mostrar recibo com dados e valor total. 
Implemente a estrutura de Herança apresentada acima e crie a
classe Moto, depois instancie um Carro e uma Moto na main.
● Desafio de Sobrecarga: Na classe Veiculo, crie dois construtores:
○ Um que recebe placa e modelo.
○ Outro que recebe apenas a placa (e define o modelo como
"Generico"). */

public class Main{
    public static void main(String[] args){
        System.out.println("=================ESTACIONAMENTO================");
        //(String modelo, String placa, double entrada)
        Moto m1=new Moto("Honda CG", "XYZ-5678");
        m1.setFidelizado(true); 
        m1.Estacionar(10.0);
        m1.Sair(15.0);

        Carro c1= new Carro("Porsche Carrera GT", "LU5-48EA");
        c1.setFidelizado(true);
        c1.Estacionar(16.0);
        c1.Sair(18);

        Veiculo g = new Veiculo("34H-387E");
        g.Estacionar(15.0);
        g.Sair(18.0);
        

    }
}
