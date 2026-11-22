package controller;

import java.util.*;
import model.*;

public class Sistema {

    private Scanner sc = new Scanner(System.in);
    private List<Medico> medicos = new ArrayList<>();
    private List<Paciente> pacientes = new ArrayList<>();

    // ===== MÉTODO SEGURO =====
    private int lerOpcao(int totalOpcoes) {
        int valor;

        while (true) {
            try {
                valor = sc.nextInt();
                sc.nextLine();

                if (valor < 1 || valor > totalOpcoes) {
                    System.out.println("⚠️ Escolha uma opção válida (1 até " + totalOpcoes + ")");
                } else {
                    return valor;
                }

            } catch (InputMismatchException e) {
                System.out.println("⚠️ Digite apenas números!");
                sc.nextLine();
            }
        }
    }

    // ===== MENU PRINCIPAL =====
    public void iniciar() {
        int opcao;

        do {
            System.out.println("\n=== MENU PRINCIPAL ===");
            System.out.println("1 - Aba Médico");
            System.out.println("2 - Aba Paciente");
            System.out.println("3 - Listagem geral");
            System.out.println("4 - Sair");

            opcao = lerOpcao(4);

            switch (opcao) {
                case 1 -> menuMedico();
                case 2 -> menuPaciente();
                case 3 -> listarTudo();
                case 4 -> System.out.println("Encerrando...");
            }

        } while (opcao != 4);
    }

    // ===== MÉDICO =====
    private void menuMedico() {
        int op;

        do {
            System.out.println("\n=== ABA MÉDICO ===");
            System.out.println("1 - Cadastrar Médico");
            System.out.println("2 - Voltar");

            op = lerOpcao(2);

            if (op == 1) cadastrarMedico();

        } while (op != 2);
    }

    private void cadastrarMedico() {
        System.out.print("Nome do médico: ");
        String nome = sc.nextLine();

        String[] especialidades = {
            "Cirurgião", "Dentista", "Cardiologista",
            "Pediatra", "Ortopedista", "Dermatologista",
            "Neurologista", "Psiquiatra", "Ginecologista", "Oftalmologista"
        };

        System.out.println("Escolha a especialidade:");
        for (int i = 0; i < especialidades.length; i++) {
            System.out.println((i + 1) + " - " + especialidades[i]);
        }

        int escolha = lerOpcao(10);

        medicos.add(new Medico(nome, especialidades[escolha - 1]));
        System.out.println("Médico cadastrado!");
    }

    // ===== PACIENTE =====
    private void menuPaciente() {
        int op;

        do {
            System.out.println("\n=== ABA PACIENTE ===");
            System.out.println("1 - Cadastrar Paciente");
            System.out.println("2 - Voltar");

            op = lerOpcao(2);

            if (op == 1) cadastrarPaciente();

        } while (op != 2);
    }

    private void cadastrarPaciente() {
        System.out.print("Nome do paciente: ");
        String nome = sc.nextLine();

        System.out.println("Tem plano?");
        System.out.println("1 - Sim");
        System.out.println("2 - Não");

        int opcao = lerOpcao(2);
        boolean temPlano = (opcao == 1);

        Paciente p = new Paciente(nome, temPlano);
        pacientes.add(p);

        System.out.println("Deseja ver o valor da consulta?");
        System.out.println("1 - Sim");
        System.out.println("2 - Não");

        int ver = lerOpcao(2);

        if (ver == 1) {
            Consulta c = temPlano ? new ConsultaPlano() : new ConsultaParticular();
            System.out.println("Valor: R$ " + c.calcularValor(p));
        }

        System.out.println("Paciente cadastrado!");
    }

    // ===== LISTAGEM =====
    private void listarTudo() {

        System.out.println("\n=== MÉDICOS ===");
        if (medicos.isEmpty()) {
            System.out.println("Nenhum médico cadastrado.");
        } else {
            for (Medico m : medicos) {
                System.out.println(m.getNome() + " - " + m.getEspecialidade());
            }
        }

        System.out.println("\n=== PACIENTES ===");
        if (pacientes.isEmpty()) {
            System.out.println("Nenhum paciente cadastrado.");
        } else {
            for (Paciente p : pacientes) {

                Consulta c = p.isTemPlano()
                        ? new ConsultaPlano()
                        : new ConsultaParticular();

                System.out.println("Nome: " + p.getNome());
                System.out.println("Plano: " + (p.isTemPlano() ? "Sim" : "Não"));
                System.out.println("Valor: R$ " + c.calcularValor(p));
                System.out.println("----------------");
            }
        }
    }
}
