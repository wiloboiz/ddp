#include <iostream>
using namespace std;

// Looping

int main () 
{
 	for (int i = 0; i < 10; i++){
 		for (int j = 0; j < i; j++){
	 	cout << "* ";
	 }
	  cout << endl;
	}
	for (int i = 10; i > 0; i--){
 		for (int j = 10; j < i; j--){
	 	cout << "* ";
	 }
	  cout << endl;
	}

 	return 0;	 
}
