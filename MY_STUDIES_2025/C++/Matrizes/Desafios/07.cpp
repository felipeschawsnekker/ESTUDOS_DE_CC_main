#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;
    
    
    cout<<"Digite a proporção da sua matriz quadrada: "; 
    cin>>x;
    
    double matriz[x][x];
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
        cout<<"["<<i<<"]"<<"["<<j<<"] : "; cin>>matriz[i][j];
    }
}

    cout<<"\n========MATRIZ========\n";
    for(int i=0; i<x; i++){
        cout<<"[ ";
        for(int j=0; j<x; j++){
            cout<<matriz[i][j];
            cout<<" ";
        }
        cout<<"]"<<endl;
    }
    
    cout<<"\n======================\n";
    
    double cont[6]={0};
    string m[6]={"Soma Diagonal Principal","Soma Diagonal Secundaria","Soma acima da Diagonal Principal","Soma Abaixo da Diagonal Principal","Soma Acima da Diagonal Secundária","Soma Abaixo da Diagonal Secundária"};
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            //Diagonal Principal
            if(i==j){
                cont[0]+=matriz[i][j];
            }
            
            //Diagonal Secundaria
            if(i+j==x-1){
                cont[1]+=matriz[i][j];
            }
            
            //Acima da Diagonal Principal
            if(i<j){
                cont[2]+=matriz[i][j];
            }
            
            //Abaixo da Diagonal Principal
            if(i>j){
                cont[3]+=matriz[i][j];
            }
            
            //Acima da Diagonal Secundária
            if(i+j<x-1){
                cont[4]+=matriz[i][j];
                
            }
            //Abaixo da Diagonal Secundária
            if(i+j>x-1){
                cont[5]+=matriz[i][j];

            }
        }
    }
    
    for(int i=0; i<6;i++){
        cout<<m[i]<<": "<<cont[i]<<endl;
    }
return 0;
}
