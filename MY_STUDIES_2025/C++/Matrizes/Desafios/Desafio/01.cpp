#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(){
    int cont=1;
    srand(time(0));
    int num =(rand()+1)%501;
    int i=0;
    int x;
    string a[4]={"Muito sortudo","Sortudo","Normal","Sem sorte"};
    cout<<"Tente adivinhar um número entre 0 a 500"<<endl;
    
    while (i<=0){
        cout<<"Tentativa "<<cont<<": ";
        cin>>x;
        cont+=1;
        if(x>num){
            cout<<"Maior que o número"<<endl;
        }
        else if (x<num){
            cout<<"Menor que o número"<<endl;
        }
        if (x==num){
            cout<<"Acertou! ";
            
            if(cont>=1 && cont<=3){
                cout<<a[0];
            }
            else if (cont>=4 && cont<=6){
                cout<<a[1];
                
            }
            else if(cont>=7 && cont<=10){
                cout<<a[2];
            }
            else if (cont>10){
                cout<<a[3];
            }
            i++;
            break;
        }
    }
    
}
