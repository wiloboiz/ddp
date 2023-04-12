#include <iostream>
using namespace std;
int main(){

//Nama : Muhammad Fakhri Wilova
//Kelas : A
//NPM : 2217051104

	float nilai;
	cin>>nilai;
	
	//rumus
	if (nilai >= 80 && nilai <=100){
		cout<<"A";
	}
	else if (nilai>=76 && nilai<79.99){
		cout<<"A-";
	}
	else if (nilai>=72 && nilai<=75.99){
		cout<<"A/B";
	}
	else if (nilai>=68 && nilai<=71.99){
		cout<<"B+";
	}
	else if (nilai>=64 && nilai<=67.99){
		cout<<"B";
	}
	else if (nilai>=60 && nilai<=63.99){
		cout<<"B-";
	}
	else if (nilai>=56 && nilai<=59.99){
		cout<<"B/C";
	}
	else if (nilai>=52 && nilai<=55.99){
		cout<<"C+";
	}
	else if (nilai>=48 && nilai<=51.99){
		cout<<"C";
	}
	else if (nilai>=44 && nilai<=47.99){
		cout<<"C-";
	}
	else if (nilai>=40 && nilai<=43.99){
		cout<<"D+";
	}
	else if (nilai>=36 && nilai<=39.99){
		cout<<"D";
	}
	else if (nilai>=0 && nilai<=35.99){
		cout<<"E";
	}
	else {
		cout<<"Melebihi Range";
	}
	
	return 0;
}
