package model;

public class Paciente extends Pessoa {
    private boolean temPlano;

    public Paciente(String nome, boolean temPlano) {
        super(nome);
        this.temPlano = temPlano;
    }

    public boolean isTemPlano() {
        return temPlano;
    }
}
