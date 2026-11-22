#include <iostream>

using namespace std;

//0,1 quantidade par de 1 

bool Ler(string num){
    int temp_one=0;
    int temp_zero=0;
    if(num==""){
            cout<<"Digite uma cadeia não vazia!"<<endl;
            return false;
        }
    for(char c : num){
        if(c=='1'){
            temp_one+=1;
        }
        else if(c=='0'){
            temp_zero+=1;
        }
        else{
            cout<<"Cadeia inválida";
            return false;
            
        }
    }
        
    if(temp_one%2==0){
        cout<<"Cadeia Aceita!"<<endl;
        return true;
        
    }
    else{
        cout<<"Cadeia inválida";
        return false;
    }
}

int main(){
    string num;
    cout<<"Digite uma cadeia composta de 0 e 1 (Número par de 1's é válido): ";
    getline(cin,num);
    Ler(num);
}
