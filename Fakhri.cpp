#include<iostream>
using namespace std;
int main(){
	
	string a;
	cout<<"Masukkan Nama : ";
	getline(cin,a);
	cout<<"Masukkan NPM : ";
	string b;
	getline(cin,b);
	string c;
	cout<<"Masukkan Hobi : ";
	getline(cin,c);
	cout<<"Nama saya adalah "<<a <<" dengan NPM "<<b <<" Hobi saya adalah "<<c;
	return 0;
}
