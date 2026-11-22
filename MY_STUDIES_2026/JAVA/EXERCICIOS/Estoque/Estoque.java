public class Estoque{
    private String nome_item;
    private int quantidade_item=0;

    public void Entrada(String nome_item, int quantidade_item){
        this.nome_item = nome_item;
        this.quantidade_item += quantidade_item;
        System.out.println("Item adicionado com sucesso!");
        System.out.println("Item: " + nome_item + "\nQuantidade: "+ this.quantidade_item + "\n");
        

    }

    public void Sair(String nome_item, int quantidade_item){
        if (!nome_item.equals(this.nome_item)) {
            System.out.println("Erro: item diferente do estoque.");
            return ;
        }
        if(this.quantidade_item>=quantidade_item){
            System.out.println("Item removido com sucesso");
            this.quantidade_item -= quantidade_item;


        }
        else{
            System.out.println("Nao foi possivel remover o item \n");
        }
       
        System.out.println("Item: " + nome_item + "\nQuantidade: "+ this.quantidade_item + "\n");

    }
}
