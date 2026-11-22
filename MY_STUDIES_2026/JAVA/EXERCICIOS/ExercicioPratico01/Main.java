import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner entrada= new Scanner(System.in);
        Carro c1 = new Carro();
        Carro c2 = new Carro();
        
        System.out.print("Modelo 1: ");
        c1.modelo=entrada.nextLine();
        System.out.print("Modelo 2: ");
        c2.modelo=entrada.nextLine();
        
        System.out.print("Cor 1: ");
        c1.cor=entrada.nextLine();
        System.out.print("Cor 2: ");
        c2.cor=entrada.nextLine();
        
        System.out.print("Placa 1: ");
        c1.placa=entrada.nextLine();
        System.out.print("Placa 2: ");
        c2.placa=entrada.nextLine();
        
        System.out.print("Ano 1: ");
        c1.ano=entrada.nextInt();
        System.out.print("Ano 2: ");
        c2.ano=entrada.nextInt();
        
        
        System.out.print("HORÁRIO DE ENTRADA 1:");
        c1.entrar=entrada.nextDouble();
        System.out.print("HORÁRIO DE SAÍDA 1: ");
        c1.sair=entrada.nextDouble();
        
        System.out.print("HORÁRIO DE ENTRADA 2:");
        c2.entrar=entrada.nextDouble();
        System.out.print("HORÁRIO DE SAÍDA 2: ");
        c2.sair=entrada.nextDouble();
        
        
        c1.Estacionar_Carro();
        c2.Estacionar_Carro();

        
        
        c1.Sair_Carro();
        c2.Sair_Carro();
        
        System.out.println("Carro: " + c1.modelo);
        System.out.println("Cor: " + c1.cor);                  
        System.out.println("Placa: " + c1.placa);
        System.out.println("Ano: " + c1.ano);
        System.out.println("Tempo: " + c1.tempo_estacionado);
        System.out.println("O valor total a se pagar é: R$" + c1.preco_total);
        
        System.out.println("------------------------------------");
        
         System.out.println("Carro: " + c2.modelo);
        System.out.println("Cor: " + c2.cor);                  
        System.out.println("Placa: " + c2.placa);
        System.out.println("Ano: " + c2.ano);
        System.out.println("Tempo: " + c2.tempo_estacionado);
        System.out.println("O valor total a se pagar é: R$" + c2.preco_total);
   
        entrada.close();
    }
}
