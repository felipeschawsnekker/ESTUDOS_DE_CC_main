public class Veiculo {

    protected String modelo;
    protected String placa;

    public Veiculo(String modelo, String placa) {
        this.modelo = modelo;
        this.placa = placa;
    }

    public Veiculo(String placa) {
        this.modelo = "Generico";
        this.placa = placa;
    }

    public String getModelo() { return modelo; }
    public String getPlaca() { return placa; }

    public void imprimir() {
        System.out.println("Modelo: " + modelo);
        System.out.println("Placa: " + placa);
    }
}
