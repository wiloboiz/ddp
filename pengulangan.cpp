#include <iostream>
using namespace std;
int main (){
	
	//Nama : Muhammad Fakhri Wilova
	//Kelas : A
	//NPM : 2217051104
	
	char ulangi = 'y';
	int counter = 0;
	
	//rumus
	do{
		cout << "Apakah kamusayang dia?"<<endl;
		cout << "jawab (y/t) : ";
		cin>>ulangi;
	
		//increment counter
	counter ++;
	}
	while (ulangi == 'y');
	
	cout << "Kamu masih punya harapan!"<<endl;
	cout << "Kamu berusaha sebanyak " <<counter <<" kali";

	return 0;
}
