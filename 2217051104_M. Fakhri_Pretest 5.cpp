#include <iostream>
using namespace std;

//Nama : Muhammad Fakhri WIlova
//Kelas : A
//NPM : 2217051104

int main(){
	
	int n,bilangan;
	float total,rata;
	cin >> n;
	
	for (int x = 0 ; x < n ; x++){
		cin >> bilangan;
		total += bilangan;
		}
		
	rata = total / n;
	cout << "total penjumlahan : " << total;
	cout << endl;
	cout << "rata rata : " << rata;
	return 0;
}
