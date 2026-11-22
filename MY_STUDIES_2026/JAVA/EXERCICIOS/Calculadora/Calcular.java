public class Calcular{
    private double num1,num2;
    private char sinal;

    public double operacoes(double num1,double num2, char sinal){
        if(sinal=='+'){
            return num1+num2;
    }
        else if(sinal=='-'){
            return num1-num2;
        }

        else if(sinal=='*'){
            return num1*num2;
        }
        else if (sinal=='/'){
            if (num2!=0){
                return num1/num2;
            }
            else {
                System.out.println("Divisao por 0. ERRO");
                return Double.NaN;
            }
            
        }
        else{
    return Double.NaN;
    }
}
}

