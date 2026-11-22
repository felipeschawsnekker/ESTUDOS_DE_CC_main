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
"Generico"). 

Refatore o sistema para que o processamento de saída seja
polimórfico.
O código principal deve tratar todos os objetos apenas como
Veiculo, mas o resultado final deve respeitar a regra de cada um.

*/

public class Main{
    public static void main(String[] args){
        System.out.println("=================ESTACIONAMENTO================");
        //(String modelo, String placa, double entrada)
        Veiculo[] v= new Veiculo[3];
        v[0]=new Moto("Honda CG", "XYZ-5678");
        v[0].setFidelizado(true); 
        v[0].Estacionar(10.0);
        v[0].Sair(15.0);

        v[1]= new Carro("Porsche Carrera GT", "LU5-48EA");
        v[1].setFidelizado(true);
        v[1].Estacionar(16.0);
        v[1].Sair(19);

        v[2] = new Veiculo("34H-387E");
        v[2].Estacionar(15.0);
        v[2].Sair(18.0);
        

    }
}
