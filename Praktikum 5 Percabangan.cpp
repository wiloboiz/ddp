#include<iostream>
using namespace std;
	int main(){
		
	//contoh switch case
//		int angka;
//		cin>>angka;
//		switch(angka){
//		case 1 :
//			cout<<"Nilai anda 1"<<endl;
//			break;
//		case 2 :
//			cout<<"Nilai anda 2"<<endl;
//			break;
//		case 3:
//			cout<<"Nilai anda 3"<<endl;
//			break;
//		default:
//			cout<<"Nilai tidak terdaftar"<<endl;
//		}

//contoh ternary
//	int umur;
//	cin>>umur;
//	cout<<"Anda "<<(umur>=17?"cukup " : "dibawah ")<<"umur";

	//contoh  if else cek bilangan ganjil genap dan positif negatif
	int bilangan;
	cin>>bilangan;
	if(bilangan%2==0){
		cout<<"bilangan genap"<<endl;
	}
	else if(bilangan%2==1){
		cout<<"bilangan ganjil";
	}
	
	if(bilangan>0){
		cout<<"bilangan positif"<<endl;
	}
	else if(bilangan<0){
		cout<<"bilangan negatif";
	}
	
	
	
	
		return 0;
	}
