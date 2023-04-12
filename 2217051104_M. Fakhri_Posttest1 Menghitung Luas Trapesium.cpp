#include <iostream> //Nama : Muhammad Fakhri Wilova
using namespace std; //NPM : 2217051104
int main(){
	
	float sisi1, sisi2, tinggi;
	float hasil;
	cout<<"Menghitung Luas Trapesium\n";
	cout<<"Masukkan Sisi Pertama : ";
	cin>>sisi1;
	cout<<"Masukkan Sisi Kedua : ";
	cin>>sisi2;
	cout<<"Masukkan Tinggi : ";
	cin>>tinggi;
	cout<<"\nRumus Luas Trapesium = 1/2 (sisi1 + sisi2) * tinggi";
	cout<<"\nLuas Trapesium = " <<"1/2 ("<<sisi1 <<" + " <<sisi2 <<") * " <<tinggi;
	hasil = ((sisi1 + sisi2) * tinggi) /2;
	cout<<"\nHasilnya adalah : "
	<<hasil;
	return 0;
}
