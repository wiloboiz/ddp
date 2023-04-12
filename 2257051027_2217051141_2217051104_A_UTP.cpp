#include <iostream>
#include <cstdlib>
#include <curses.h>
#include <unistd.h>
using namespace std;

void nama(){
	char nama[50][50] = {"Imam Ahdy Sabilla" , "Anwar Fauzi" , "M. Fakhri Wilova"};
	
//	cout << "Imam Ahdy Sabilla << endl";
//	cout << "Anwar Fauzi << endl";
//	cout << "M. Fakhri Wilova << endl";
//	cout << "klik 1 untuk kembali ke awal << endl";

	for (int i = 0 ; i < 3 ; i++){
		cout << nama[i] << endl;
	}
}

int main(){
	int pil, player, enemy, n, k;
	string ulang;
	
	awal:
	initscr ();
	mvprintw(20,50, "Selamat");
	refresh();
	sleep(1);
	mvprintw(20,59, "Bermain");
	refresh();
	sleep(1);
	getch();
	endwin();
	
	cout << "\t\t\t\t\t\t<(==========================)>";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t | 1. Nama Pembuat          |";
	cout << "\n";
	cout << "\t\t\t\t\t\t | 2. Mulai Permainan       |";
	cout << "\n";
	cout << "\t\t\t\t\t\t | 3. Keluar/Pilihan        |";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t<(==========================)>";
	cout << "\n";
	cout << "\t\t\t\t\t\tSilahkan Pilih <1/2/3> : ";
	
	cin >> n;
	if (n == 1){
	system ("cls");
	nama();
	cin >> k;
	if (k == 1){
		goto awal;
	}
	else if (k != 1){
		cout << "Error";
	}
}
else if(n==2){
	do{
		system ("cls");
	cout << "1. Lempar Koin" << endl;
	cout << "2. Keluar/Pilihan " << endl;
	cout << "Silahkan Pilih <1/2> : ";
	cin >> pil;
	if (pil == 1){
		system ("cls");
		player = (rand() % 6) + 1; 
		enemy = (rand() % 6) + 1; //
		cout << "player : " << player << endl;
		cout << "lawan : " << enemy << endl;
		if (player > enemy){
			cout << "Anda Menang" << endl;
		}
		else if(player < enemy){
			cout << "Anda Kalah" << endl;
		}
		else {
			cout << "Seri" << endl;
		}
		cout<<" tekan y jika ingin ulang dan n jika tidak : ";
		cin >> ulang;
	}
	else if (pil == 2){
		system ("cls");
		cout << "Program Selesai";
		exit(0);
	}
	else {
		cout << "Pilihan Salah" <<endl;
	}
}  
	while(ulang == "y");
	system("cls");
	cout<<"Program Selesai";
	}
	else if (n == 3){
	system ("cls");
	cout << "Game Selesai";
	}
	else {
	cout << "Error";
	}
return 0;
}
