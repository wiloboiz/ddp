#include <iostream>
#include <cstdlib>
#include <curses.h>
#include <unistd.h>

using namespace std;
void nama(){
	char nama[50][50]={"imam ahdy sabillah","anwar fauzi","fakhri wilova"};
	
//	cout<<"imam ahdy sabilla\n";
//	cout<<"anwar fauzi\n";
//	cout<<"fakhri wilova\n";
//	cout<<"klik 1 untuk kembali ke awal\n";

for(int i=0; i<3;i++){
cout<<nama[i]<<endl;
}
}
int main(){
	int pil, player, enemy, n, k;
	string ulang;
	
	awal:
	initscr ();
	mvprintw(1,1, "Silahkan");
	refresh();
	sleep(1);
	mvprintw(1,10, "Pilih");
	refresh();
	sleep(1);
	getch();
	endwin();
	cout<<"\t\t\t\t\t\t<(==========================)>";
	cout<<"\n";
	cout<<"\n";
	cout<<"\t\t\t\t\t\t | 1. Nama Pembuat          |";
	cout<<"\n";
	cout<<"\t\t\t\t\t\t | 2. Mulai Permainan       |";
	cout<<"\n";
	cout<<"\t\t\t\t\t\t | 3. Keluar/Pilihan        |";
	cout<<"\n";
	cout<<"\n";
	cout<<"\t\t\t\t\t\t<(==========================)>";
	cout<<"\n";
	cout<<"Silahkan Pilih : ";
	
cin>>n;
if(n==1){
	system("cls");
	nama();
	cin>>k;
	if (k==1)
	{
		goto awal;
	}
	else if (k!=1)
	{
		cout<<"Error";
	}
}
else if(n==2){
	do{
		system("cls");
	cout<<"1. Lempar Koin";
	cout<<"\n2. Keluar/Pilihan \n";
	cout<<"masukkan pilihan anda : ";
	cin>>pil;
	if(pil == 1){
		system("cls");
		player = (rand() % 6) + 1;
		enemy = (rand() % 6) + 1;
		cout<<"player : "<<player<<endl;
		cout<<"lawan : "<<enemy<<endl;
		if(player > enemy){
			cout<<"anda menang"<<endl;
		} else if(player < enemy){
			cout<<"anda kalah"<<endl;
		} else {
			cout<<"seri"<<endl;
		}
		cout<<" tekan y jika ingin ulang dan n jika tidak : "; cin>>ulang;
	} else if(pil == 2){
		system("cls");
		cout<<"Program selesai";
		exit(0);
	} else {
		cout<<"Pilihan Salah"<<endl;
	}
}  while(ulang == "y");
system("cls");
cout<<"Program Selesai";
}
else if(n==3){
	system("cls");
	cout<<"game selesai";
}
else 
{
	cout<<"Error";
	
}
return 0;
	}
