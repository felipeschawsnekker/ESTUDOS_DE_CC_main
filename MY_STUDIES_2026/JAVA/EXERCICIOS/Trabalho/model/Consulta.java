package model;

public abstract class Consulta {
    protected double valorBase = 100.0;

    public abstract double calcularValor(Paciente paciente);
}
