package unifeg.controller;

import java.util.ArrayList;
import unifeg.model.Paciente;

public class PacienteController {

    private static ArrayList<Paciente> listaPacientes = new ArrayList<>();

    public static ArrayList<Paciente> getListaPacientes() {
        return listaPacientes;
    }

    public void cadastrarPaciente(String nome, int idade, String cpf, String convenio) {

        nome = nome.trim();
        cpf = cpf.trim();
        convenio = convenio.trim();

        // valida campos vazios
        if (nome.isEmpty()
                || cpf.isEmpty()
                || convenio.isEmpty()
                || idade <= 0) {

            throw new IllegalArgumentException(
                    "Preencha todos os campos."
            );
        }

        // nome não pode ter números
        if (nome.matches(".*\\d.*")) {

            throw new IllegalArgumentException(
                    "Nome não pode conter números."
            );
        }

        // idade válida
        if (idade < 0 || idade > 120) {

            throw new IllegalArgumentException(
                    "Idade inválida."
            );
        }

        // CPF só números
        if (!cpf.matches("\\d+")) {

            throw new IllegalArgumentException(
                    "CPF deve conter apenas números."
            );
        }

        // CPF deve ter 11 dígitos
        if (cpf.length() != 11) {

            throw new IllegalArgumentException(
                    "CPF deve ter 11 dígitos."
            );
        }

        // verifica CPF duplicado
        for (Paciente p : listaPacientes) {
            if (p.getCpf().equals(cpf)) {
                throw new IllegalArgumentException(
                        "Já existe um paciente com esse CPF."
                );
            }
        }

        // cria paciente
        Paciente paciente = new Paciente(
                nome,
                idade,
                cpf,
                convenio
        );

        listaPacientes.add(paciente);

        // mensagem de sucesso (igual ao MédicoController)
        javax.swing.JOptionPane.showMessageDialog(
                null,
                paciente.exibirDados()
        );
    }

    public void removerPaciente(int index) {
        if (index >= 0 && index < listaPacientes.size()) {
            listaPacientes.remove(index);
        }
    }
}
