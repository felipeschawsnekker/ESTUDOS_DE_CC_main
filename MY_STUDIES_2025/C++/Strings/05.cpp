
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main(){
    
    cout<<"Digite uma palavra: ";
    string a;
    getline(cin,a);
    cout<<endl;
    
    //INVERTER STRING
    for(int i=0; i<1; i++){
    reverse(a.begin(),a.end());
    cout<<"Palavra Invertida: ";
    cout<<a;
    cout<<endl;
    reverse(a.begin(),a.end());
    }
    
    
    for(int i=0; i<1; i++){
        for(int i=0; i<a.length(); i++){
        a[i]=toupper(a[i]);
        
        }
        cout<<"\nPalavra com as vogais maíusculas: ";
    for(char &c: a){
        if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U') cout<<c;
    }
        
    
    }
    
    for(int i=0;i<1;i++){
        for(int i=0; i<a.length(); i++){
            a[i]=tolower(a[i]);;
            
        }
        cout<<"\nPalavra com as consoantes minúsculas: ";
        for(char &c : a){
            if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')) cout<<c;
        }
    }
    
    for(int i=0; i<1; i++){
    int j=0;
    for(char c : a){
            if(c==' '){
                j++;
        }
            
    }
    cout<<"\nQuantidade de espaços: "<<j;
    }
    
    for(int i=0; i<1; i++){
    int m=0;
    for(int i=0;i<=9;i++){
    for(char c : a){
            if(c==i){
                m++;
            }
    }
    }
    cout<<"\n Quantidade de Números: "<<m;
    }
    return 0;
    }
    

