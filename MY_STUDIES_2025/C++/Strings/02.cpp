
#include <iostream>
using namespace std;
#include <string>
#include <cctype>
#include <algorithm>

int main(){
    //Fazer um programa que receba uma string de no máximo 20 caracteres 
    //do usuário e mostre o conteúdo desta string de forma invertida.

    string x{20};
    
    cout<<"Digite uma palavra: "; cin>>x;
    if(x.length()>20){
        cout<<"Palavra com mais de 20 caracteres, tente novamente."<<endl;
        return 0;
    }
    
    else {
        reverse(x.begin(),x.end());
        cout<<"Palavra invertida: "<<x<<endl;
    
    cout<<"Mesma palavra desinvertida: ";
    for(int i=x.length()-1;i>=0;i--)   {
       cout<<x[i];
    } 
}
}
