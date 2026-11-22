
#include <iostream>
using namespace std;

struct Aluno{
    float n1;
    float n2;
    float media;
};

int main(){
    int n;
    cout<<"Numero de alunos: ";
    cin>>n;

    Aluno *a = new Aluno[n];

    for(int i=0;i<n;i++){
        cout<<"Aluno "<<i+1<<endl;
        cin>>a[i].n1;
        cin>>a[i].n2;

        a[i].media = (a[i].n1 + a[i].n2)/2;
    }

    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<"Media do aluno "<<i+1<<": "<<a[i].media<<endl;
    }

    delete[] a;
}
