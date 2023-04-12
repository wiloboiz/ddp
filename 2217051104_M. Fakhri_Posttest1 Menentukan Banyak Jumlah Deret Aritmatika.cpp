#include <iostream> //Nama : Muhammad Fakhri Wilova
using namespace std; //NPM : 2217051104
int  main(){
	
	cout<<"Menentukan banyak jumlah deret aritmatika\n";
	int n, a, b, hasil;
	cout<<"Masukkan suku ke : ";
	cin>>n;
	cout<<"Masukkan suku awal : ";
	cin>>a;
	cout<<"Masukkan beda : ";
	cin>>b;
	cout<<"Sebuah baris berisi jumlah bilangan hingga suku ke "<<n <<" dari barisan aritmatika ini adalah "<<a;
	for (hasil=1;hasil<=n;hasil++)
	cout<<+(b*(hasil-1))<<"  ";
	cout<<"\nJumlah bilangan hingga suku ke "<<n <<" dari barisan Aritmatika ini adalah ";
	cout<<hasil;
	return 0;
}
