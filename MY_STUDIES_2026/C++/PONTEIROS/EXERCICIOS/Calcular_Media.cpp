#include <iostream>
using namespace std;
float nota4;
float Calcular_Media(float nota1, float &nota2,float *nota3, float media){
    media=(nota1+nota2+*nota3+nota4)/4;
    return media;
}

int main(){
    float nota1, nota2, nota3;
        cout<<"Insira a primeira nota: "; cin>>nota1;
        cout<<"Insira a segunda nota: "; cin>>nota2;
        cout<<"Insira a terceira nota: "; cin>>nota3;
        cout<<"Insira a quarta nota: "; cin>>nota4;
        float media=Calcular_Media(nota1,nota2,&nota3,media);
        cout<<"A media e: "<<media<<endl;
    return 0;
    }
