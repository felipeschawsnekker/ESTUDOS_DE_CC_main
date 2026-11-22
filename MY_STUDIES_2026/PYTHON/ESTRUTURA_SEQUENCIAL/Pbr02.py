#Escreva um programa que receba a temperatura em C e mostre em F

def geraFahrenheit(grausCelsius):
    return (9*grausCelsius/5)+32
    
temperatura=float(input("Digite a temperatura em Celsius: "))
print("Temperatura em F: ",geraFahrenheit(temperatura))
