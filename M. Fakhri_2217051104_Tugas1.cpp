#include <iostream>
using namespace std;
int main(){
	
	int angka[5];
	int temp = 0;
	int i, j, k, N;
	cout<<"Masukkan Banyak Array : ";
	cin>>N;
	
	for(i = 0 ; i < N ; i++){
    cout << "Elemen ke-" << i <<" : ";
    cin >> angka[i];
	}
	
	cout << "Array sebelum disorting : ";
	for (int i = 0 ; i < N ; i++){
		cout << angka[i] << " ";
	}
	
	for (int j = 0 ; j < N ; j++){
		for (int k = 0 ; k < 5 ; k++){
			if 	(angka[k] > angka[k+1]){
				temp = angka[k];
				angka[k] = angka[k+1];
				angka[k+1] = temp;
			}
		}
	}
	cout << "\n";
	
	cout << "Array sesudah disorting : ";
	for (int i = 0 ; i < N ; i++){
		cout << angka[i] << " ";
	}
	return 0;
}
