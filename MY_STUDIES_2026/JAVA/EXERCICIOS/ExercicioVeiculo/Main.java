
public class Main
{
	public static void main(String[] args) {
	    //String modelo; String placa; String cor; int ano, int tempo;
		Carro c = new Carro("Civic", "ABC-1234", "Preto", 2022, 12);
        Moto m = new Moto("CG 160", "XYZ-9999", "Vermelha", 2021, 6);

        System.out.println("Carro: R$ " + c.Estacionamento());
        System.out.println("Moto: R$ " + m.Estacionamento());
		
		

	}
}
