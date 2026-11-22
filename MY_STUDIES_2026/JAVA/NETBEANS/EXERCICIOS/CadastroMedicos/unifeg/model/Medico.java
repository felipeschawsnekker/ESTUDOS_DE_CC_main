package unifeg.model;

// Classe herda atributos de Pessoa
public class Medico extends Pessoa {
    private String crm;
    private String especialidade;

    public Medico(String nome,int idade,String crm,String especialidade) {
        // Chama construtor da superclasse
        super(nome,idade);
        this.crm = crm;
        this.especialidade = especialidade;
    }

    // Getter do CRM
    public String getCrm() {
        return crm;
    }
    
    // Getter da especialidade
    public String getEspecialidade() {
        return especialidade;
    }

    // Polimorfismo
    @Override
    public String exibirDados() {

        return "=== DADOS DO MÉDICO ==="
                + "\nNome: " + getNome()
                + "\nIdade: " + getIdade()
                + "\nCRM: " + crm
                + "\nEspecialidade: " + especialidade;
    }
}
