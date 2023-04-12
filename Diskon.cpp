#include <iostream>
using namespace std;
int main(){
	
	float total_harga,harga_awal,diskon;
	cout<<"Masukkan harga awal : ";
	cin>>harga_awal;
	
	//rumus
	if (harga_awal<=149000){
		diskon = 0;
	}
	else if ((harga_awal>=149000) && (harga_awal<249000)){
		diskon = (harga_awal * 0.1);
	}
	else if ((harga_awal>=249000)&& (harga_awal<349000)){
		diskon = (harga_awal * 0.2);
	}
	else if ((harga_awal>=349000)&& (harga_awal<449000)){
		diskon = (harga_awal * 0.3);
	}
	else if ((harga_awal>=449000)&& (harga_awal<549000)){
		diskon = (harga_awal * 0.4);
	}
	else if (harga_awal>=549000){
		diskon = (harga_awal * 0.5);
	}
	else if (harga_awal>1000000){
		diskon = 0;
	}
	
	total_harga = harga_awal - diskon;
	cout<<total_harga;
	return 0;
	
}
