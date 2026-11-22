package unifeg.model;

public class Paciente extends Pessoa {

    private String cpf;
    private String convenio;

    public Paciente(String nome,int idade,String cpf,String convenio){
        super(nome,idade);
        this.cpf = cpf;
        this.convenio = convenio;
    }

    public String getCpf(){
        return cpf;
    }

    public String getConvenio(){
        return convenio;
    }

    @Override
    public String exibirDados(){
        return "=== PACIENTE ==="
                + "\nNome: " + getNome()
                + "\nIdade: " + getIdade()
                + "\nCPF: " + cpf
                + "\nConvênio: " + convenio;
    }
}
