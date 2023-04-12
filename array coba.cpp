#include <iostream>
using namespace std;

//Nama : Muhammad Fakhri WIlova
//Kelas : A
//NPM : 2217051104

int main(){
	//int bilangan [5]{ 1 , 2 , 3 };
	
//	char huruf [5]{'a' , 'b' , 'c' , 'd'};
//	
//	string nama = "adam";
//	cout << nama [1];
	
//	int nilai [5]={20,32,33,35,36};
//	
//	for (int i = 0 ; i < 5 ; i++){
//		cout << "Nilai ke-" << i << "=" << nilai [i] << endl;


//	string nama [] = {"adam","isal","yanto","dani","musrsid"};
//	
//	for (int i = 0 ; i < sizeof (nama) / sizeof (nama[0]) ; i++){
//	cout << nama [i] << endl;
//	}

	//array dua dimensi
	int matriks [50][50];
	int jumlah_baris,jumlah_kolom,i,j;
	
	cin >> jumlah_baris << endl;
	cin >> jumlah_kolom << endl;
	
	for (i = 0 ; i < jumlah_baris ; i++){
		for (j = 0 ; j < jumlah_kolom ; j++){
			cout << "Baris " << i + 1 << ", kolom " << j + 1 << "=";
			cin >> matriks [i][j];
		}
		cout << endl;
	}
	
	
}
	
	
	
	

