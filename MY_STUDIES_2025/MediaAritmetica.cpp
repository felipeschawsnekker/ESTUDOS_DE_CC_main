#include <iostream>
using namespace std;

double x;
double y;

void notas(){
    cout<<"Digite as notas dos dois alunos"<<endl;
    cout<<"Aluno 1: "; cin>>x;
    cout<<"Aluno 2: "; cin>>y;
    
    double media=(x+y)/2.0;
    cout<<"\n A média é: "<<media;
}
    int main() {
        notas();
        return 0;
        }
