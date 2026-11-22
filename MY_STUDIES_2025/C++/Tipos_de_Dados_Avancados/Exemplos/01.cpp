#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct Aluno{
    int matricula;
    float nota[3];
    float media;
};
int main(){
    Aluno Felipe;
        Felipe.matricula=303;
        Felipe.nota[0]=6.0;
        Felipe.nota[1]=7.5;
        Felipe.nota[2]=8.5;
        Felipe.media=(Felipe.nota[0]+Felipe.nota[1]+Felipe.nota[2])/3;
    
      
cout<<fixed<<setprecision(2)<<"Media: "<<Felipe.media;
    
}
