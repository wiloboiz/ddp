#include <iostream>
using namespace std;
int main(){
	
	int nilai;
	cin>>nilai;
	
	//contoh if
	
	if (nilai==100){
		cout<<"Nilai sempurna";
	}
	
	else if (nilai > 75 && nilai < 100) {
		cout<<"Nilai di atas kkm";	
	}
	else if (nilai <= 75 && nilai > 0) {
		cout<<"Nilai di bawah kkm";	
	}
	
	
	return 0;
}
