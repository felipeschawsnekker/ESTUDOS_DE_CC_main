#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> numero;

	numero.push_back(10);
	numero.push_back(12);
	numero.push_back(13);
	numero.push_front(2);
	numero.push_front(5);

	for(int n : numero) {
		cout<<n<<" ; ";
	}
	cout<<endl;
	numero.pop_back();
	numero.pop_front();
	for(int n : numero) {
		cout<<n<<" ; ";
	}
	cout<<endl;

}
