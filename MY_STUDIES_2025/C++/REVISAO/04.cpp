//EXERCICIO DE NÚMEROS PERFEITOS

#include <iostream>
using namespace std;

int main(){
	
	cout<<"Digite um número inteiro: ";
	int x;
	cin>>x;
	int soma=0;
	
	for (int i=1; i<x; i++){
		if(x%i==0){
			cout<<i<<" ";
			soma+=i;
		}
	}
	cout<<endl;
	if(soma==x){
		cout<<"O número é perfeito."<<endl;
	}
	else{
		cout<<"O número não é perfeito"<<endl;
	}
	
}
