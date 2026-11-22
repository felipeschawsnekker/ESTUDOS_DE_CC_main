package model;

public class ConsultaParticular extends Consulta {

    @Override
    public double calcularValor(Paciente paciente) {
        return valorBase + 50.0; // acréscimo
    }
}
