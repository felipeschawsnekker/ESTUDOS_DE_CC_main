package unifeg.controller;

import java.util.ArrayList;
import javax.swing.JOptionPane;
import unifeg.model.Medico;

public class MedicoController {

    // Lista que armazena médicos cadastrados
    private static ArrayList<Medico> listaMedicos = new ArrayList<>();
    
    // Declara um array de Medicos (lista
    public static ArrayList<Medico> getListaMedicos() {
        return listaMedicos;
    }

    public void cadastrarMedico(String nome,int idade,String crm,String especialidade) {

        // Remove espaços vazios
        nome = nome.trim();
        crm = crm.trim();
        especialidade = especialidade.trim();

        // Validação campos vazios
        if(nome.isEmpty()
                || crm.isEmpty()
                || especialidade.isEmpty()) {

            throw new IllegalArgumentException(
                    "Preencha todos os campos."
            );
        }

        // Não permite números no nome
        if(nome.matches(".*\\d.*")) {

            throw new IllegalArgumentException(
                    "O nome não pode conter números."
            );
        }

        // Validação idade
        if(idade < 25 || idade > 120) {

            throw new IllegalArgumentException(
                    "Médicos devem ter entre 25 e 120 anos."
            );
        }

        // Validação CRM
        if(crm.length() != 6) {

            throw new IllegalArgumentException(
                    "O CRM deve possuir 6 números."
            );
        }

        // Verifica CRM duplicado
        for(Medico medicoExistente : listaMedicos) {

            if(medicoExistente.getCrm().equalsIgnoreCase(crm)) {

                throw new IllegalArgumentException(
                        "Já existe um médico com esse CRM."
                );
            }
        }

        // Cria objeto médico
        Medico medico = new Medico(
                nome,
                idade,
                crm,
                especialidade
        );

        // Adiciona na lista
        listaMedicos.add(medico);

        // Mensagem sucesso
        JOptionPane.showMessageDialog(
                null,
                medico.exibirDados()
        );
    }
}
