//Fazer um programa que receba duas strings(A,B), copia a primeira
//string para uma terceira(C) que concatena com a a segunda(B).  Depois calcula 
//o tamanho da terceira(C).

#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
    string A,B,C;
    
    cout<<"String A: "; getline(cin,A);
    cout<<"\nString B: "; getline (cin,B);
    
    C=A+B;
    
    
    cout<<"\nString somada: ";
    cout<<C<<endl;
    
    cout<<"O tamanho da string C é: "<<C.length();
    
}
