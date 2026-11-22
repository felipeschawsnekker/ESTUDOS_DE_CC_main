package model;

public class ConsultaPlano extends Consulta {

    @Override
    public double calcularValor(Paciente paciente) {
        return valorBase * 0.2; // paga 20%
    }
}
