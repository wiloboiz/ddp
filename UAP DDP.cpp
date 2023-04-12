#include <iostream>
#include <cstdlib>
#include <curses.h>
#include <unistd.h>

using namespace std;

string kondisi(string pemain, string musuh){
	if (pemain == "batu"){
		if (musuh == "batu"){
			return "seri";
		}
		else if (musuh == "gunting"){
			return "menang";
		}
		else if (musuh == "kertas"){
			return "kalah";
		}
	}
	else if (pemain == "gunting"){
		if (musuh == "batu"){
			return "kalah";
		}
		else if (musuh == "gunting"){
			return "seri";
		}
		else if (musuh == "kertas"){
			return "menang";
		}
	}
	else if (pemain == "kertas"){
		if (musuh == "batu"){
			return "menang";
		}
		else if (musuh == "gunting"){
			return "kalah";
		}
		else if (musuh == "kertas"){
			return "seri";
		}
	}
}

void tampilHasil (string pemain, string musuh){
	string hasil = kondisi (pemain, musuh);
	cout << "Anda dinyatakan " << hasil << endl;
}

int main(){
	string isi[3] = {"batu" , "gunting" , "kertas"};
	int pilihan, musuh;
	string ulang;
	
	initscr ();
	mvprintw(1,1, "Permainan");
	refresh();
	sleep(1);
	mvprintw(1,11, "Gunting");
	refresh();
	sleep(1);
	mvprintw(1,19, "Batu");
	refresh();
	sleep(1);
	mvprintw(1,24, "Kertas");
	refresh();
	sleep(1);
	getch();
	endwin();
	
	do {
		system ("cls");
		
		for (int a = 0 ; a < 3 ; a++){
			cout << a + 1  << ". " << isi[a] << endl;
		}
		cout << "pilihan : ";
		cin >> pilihan;
		musuh = rand() % 3;
		cout << "musuh : " << musuh << endl;
		cout << "============================" << endl;
		cout << "pemain : " << isi [pilihan - 1] << endl;
		cout << "musuh : " << isi [musuh -1] << endl;
		tampilHasil (isi[pilihan-1], isi[musuh-1]);
		cout << "ulang <y/n> ";
		cin >> ulang;
	}
	while (ulang == "y");
	
	system ("cls");
	
	cout << "Program Selesai" << endl;

}
