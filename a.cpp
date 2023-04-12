#include <iostream>
using namespace std;
int main(){

	int bilangan;
	cout<<"Masukkan Nilai : ";
	cin>>bilangan;
	
	//rumus if
	if (bilangan%2==0){
		cout<<bilangan<<" Termasuk bilangan genap";
	}
	else{
		cout<<bilangan<<" Termasuk bilangan ganjil";
	}
	
	return 0;
}
