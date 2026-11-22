public class Main {
    public static void main(String[] args) {

        Veiculo carro = new Carro("SUV Jeep", "ABC-1234", 20, 5);
        carro.registrarEntrada(13);
        carro.finalizarHospedagem(16);
        carro.imprimirRelatorio();

        Veiculo moto = new Moto("Honda CB500", "XYZ-9999", 10, 2);
        moto.registrarEntrada(10);
        moto.finalizarHospedagem(11);
        moto.imprimirRelatorio();

        carro.finalizarHospedagem(20);
    }
}
