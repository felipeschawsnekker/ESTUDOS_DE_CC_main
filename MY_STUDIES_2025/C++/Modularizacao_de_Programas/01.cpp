

#include <iostream>
using namespace std;


void ParImo(int x){
	int b=0;
	if (x%2==0){
	cout << x <<" é par"<<endl;
	}
	else {
 	cout<<x<<"é impar";
	}
	for(int i=1; i<=x; i++){
			if(x%i==0){
			b=b+1;
		}
		}
		if(b==2){
		cout<<"\n O número é primo";
		}
		else{
		cout<<"\n O número não é primo";
		}
		
	}



int main(){

	cout<<"Digite um número: ";
	int a;
	cin>>a;
	ParImo(a);
}
