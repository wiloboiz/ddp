#include <iostream>
using namespace std;
int main (){
		//Nama : Muhammad Fakhri WIlova
		//NPM : 2217051104
	
	float celcius, reamur, kelvin, fahrenheit;
	cout <<"Masukkan Suhu (celcius) : ";
	cin>>celcius;
	
	//rumus
	reamur = celcius * 0.8 ; 
	kelvin = celcius + 273.15 ;
	fahrenheit = (celcius * 1.8) + 32;
	
	//hasil konversi suhu ke reamur
	cout <<"Celcius to Reamur : " <<reamur; 
	
	//hasil konversi suhu ke kelvin
	cout <<"\nCelcius to Kelvin : " <<kelvin;
	
	//hasil konversi suhu ke fahrenheit
	cout <<"\nCelcius to Fahrenheit : " <<fahrenheit;

	return 0;
}
