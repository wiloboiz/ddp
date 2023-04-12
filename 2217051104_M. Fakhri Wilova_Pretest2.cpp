#include <iostream>
using namespace std;
int main(){
	float jam, menit, detik;
	cout<<"Masukkan detik : ";
	cin>>detik;
	jam = detik / (3600);
	menit = detik / 60;
	cout<<jam<< "jam atau "<<menit<<" menit ";
	return 0;
}
