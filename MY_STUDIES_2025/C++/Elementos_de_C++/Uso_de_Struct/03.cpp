//Struct Ponto com x e y. Peça dois pontos e calcule a distância entre eles.

#include <iostream>
using namespace std;
#include <string>
#include <iomanip>
#include <cmath>

struct Ponto{
    double x;
    double y;
};

double distancia(Ponto A,Ponto B){
    return sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2));
}
int main(){
    
    cout<<"\n===================CALCULADORA DE DISTÂNCIA DE PONTOS===================\n"<<endl;
    
    Ponto A;
    Ponto B;
    cout<<"Digite a coordenada X do seu ponto A: ";
    cin>>A.x;
    
    cout<<"Digite a coordenada Y do seu Ponto A: ";
    cin>>A.y;
    
    cout<<"\n----------------------------------------\n";
    cout<<"Digite a coordenada X do seu ponto B: ";
    cin>>B.x;
    
    cout<<"Digite a coordenada Y do seu Ponto B: ";
    cin>>B.y;
    cout<<"\n----------------------------------------\n";
    
    double coordenada=distancia(A,B);
    cout<<fixed<<setprecision(2)<<"\nA distância entre os dois pontos é: "<<coordenada;
}
