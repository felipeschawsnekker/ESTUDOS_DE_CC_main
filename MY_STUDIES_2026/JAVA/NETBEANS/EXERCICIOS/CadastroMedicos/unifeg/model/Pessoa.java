/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package unifeg.model;

/**
 *
 * @author aliss
 */
public class Pessoa {

    // Atributos comuns para médico e paciente
    private String nome;
    private int idade;

    public Pessoa(String nome, int idade) {

        this.nome = nome;
        this.idade = idade;
    }

    // Retorna o nome da pessoa
    public String getNome() {
        return nome;
    }

    // Retorna a idade da pessoa
    public int getIdade() {
        return idade;
    }

    // Altera o nome da pessoa
    public void setNome(String nome) {
        this.nome = nome;
    }

    // Valida e altera a idade
    public void setIdade(int idade) {

        if(idade <= 0) {
            throw new IllegalArgumentException("Idade inválida.");
        }

        this.idade = idade;
    }

    // Método que será sobrescrito nas subclasses
    public String exibirDados() {

        return nome + " - " + idade;
    }
}
