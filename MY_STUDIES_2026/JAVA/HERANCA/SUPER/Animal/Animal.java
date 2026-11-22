// CLASSE PAI
class Animal {
    String nome;

    // Construtor do Pai
    Animal(String nome) {
        this.nome = nome;
    }

    void comer() {
        System.out.println(nome + " está comendo...");
    }
}

// CLASSE FILHA
class Cachorro extends Animal {
    
    Cachorro(String nome) {
        // 1. Chama o construtor do pai para guardar o nome
        super(nome); 
    }

    @Override
    void comer() {
        // 2. Chama o método comer() original do pai
        super.comer(); 
        // 3. Adiciona um comportamento extra específico do cachorro
        System.out.println("E depois deu uma latidinha: Au au!");
    }
}
