/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Aplicacao;

/**
 *
 * @author aliss
 */

public class Logica{
public double Calculo(String n1, char sinal, String n2) {
    double numero1=Double.parseDouble(n1);
    double numero2=Double.parseDouble(n2);
    double resultado=0;
    
    switch(sinal){
        case '+':
            resultado=numero1+numero2;
            break;
        case '-':
            resultado=numero1-numero2;
            break;
        case '/':
            if(numero2!=0){
                resultado=numero1/numero2;
               
            }
            else{
                resultado=Double.NaN;
            }
            break;
        case '*':
            resultado=numero1*numero2;
            break;
        
    }
    return resultado;
   

}
}
