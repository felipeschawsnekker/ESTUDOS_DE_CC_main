

/*Exercício

● Refatorar a classe Veiculo para aplicar os padrões de segurança do
Encapsulamento.

● Proteção dos Atributos

○ Altere o modificador de acesso de todos os atributos da classe
Veiculo para private.

○ A partir de agora, ninguém fora da classe Veiculo pode tocar
nestas variáveis diretamente.

● modelo e placa: Devem ter apenas Getters. Uma vez que o veículo é
criado no construtor, sua identificação não pode ser alterada.

● valorHora: Deve ter Getter e Setter. O set deve impedir que o valor da
hora seja menor ou igual a zero.

● cupomDesconto: Deve ter Getter e Setter. O set deve garantir que o
desconto não seja negativo e não ultrapasse o limite de R$ 50,00.

● estaEstacionado: Deve ter apenas Getter. O status só deve mudar
através dos métodos registrarEntrada e finalizarHospedagem.
public class Main
*/
public class Main {
    public static void main(String[] args) {
        
        // Definimos as variaveis de preco da tabela do estacionamento
        double precoCarro = 20.00;
        double precoMoto = 10.00;

        // --- INSTANCIA 1: CARRO ---
        // Passamos os valores especificos no Construtor
        Veiculo carro = new Veiculo("SUV Jeep", "ABC-1234", precoCarro, 5.00);
        
        carro.registrarEntrada(13); // Entrou as 13h
        carro.finalizarHospedagem(16); // Ficou 3 horas -> (3 * 20) - 5 = 55.00
        carro.imprimirRelatorio();


        // --- INSTANCIA 2: MOTO ---
        // A moto usa a mesma classe, mas com preco e cupom diferentes
        Veiculo moto = new Veiculo("Honda CB500", "XYZ-9999", precoMoto, 2.00);
        
        moto.registrarEntrada(10); // Entrou as 10h
        moto.finalizarHospedagem(12); // Ficou 2 horas -> (2 * 10) - 2 = 18.00
        moto.imprimirRelatorio();


        // --- TESTE DE SEGURANCA ---
        // Tentando finalizar um veiculo que ja saiu
        carro.finalizarHospedagem(20);
    }
}
