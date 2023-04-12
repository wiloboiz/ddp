#include <iostream>
#include <conio.h>
#include <windows.h>
#include <winable.h>

using namespace std;


void gotoxy(int x, int y) 
{
 COORD pos = {x, y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void begining(){
		char kode;

		cout<<"If you sure you want contiune, please type (Y) to contiune"<<endl;
		cout<<"if you want money, type anything you want"<<endl;
		cin>>kode;
		if(kode!='Y' && kode!='y'){
			system("cls");
	for (int i=0;i<70; i++){
		system("color 36");
		gotoxy(i,10);
		cout << " Press CTRL+C for money";
		Sleep(100);
		gotoxy(i,10);
		cout << "                               ";
		if (i==69){
			i=0;
		}
	}
			exit(0);	
		}
		system("cls");
	}
   
void question(){

	string answer;
	cout << "====Question 1===";
	cout << "\nwhat is 9+10? : ";
	cin>>answer;

	if (answer == "21")
	{
		cout<< "You stupid"<<endl;
		Sleep(4000);
	}
		else if (answer == "10")
	{
		cout << "SMART"<<endl;
		Sleep(4000);
	}
	else
	{
		cout << "you're so dumb"<<endl;
		Sleep(4000);
	}
	cout<<"NEXT!"<<endl;
	Sleep(1000);
	system ("CLS");
	
string answer1;
	cout << "================Question 2============";
	cout << "\nare you suffer from brain damage ?";
	cout << "\nyes or no : ";
	cin>>answer1;

	if (answer1 == "yes")
	{
		cout<< "Sorry about that"<<endl;
		Sleep(4000);
	}
		else if (answer1 == "no")
	{
		cout << "great, now answer this things"<<endl;
		Sleep(4000);
	}
	cout<<"NEXT!"<<endl;
	Sleep(1000);
	system ("CLS");
	
string answer2;
	cout << "=================================Question 3=================================";
	cout << "\ndid you had any sexual relationship with something consindered non-human ?";
	cout << "\nwhy or no : ";
	cin>>answer2;

	if (answer2 == "why")
	{
		cout<< "i will throw 100 rock to you to your head"<<endl;
		Sleep(4000);
	}
		else if (answer2 == "no")
	{
		cout << "FInally, a really great human beeingt"<<endl;
		Sleep(4000);
	}
	cout<<"you passed this alpha test/demo, congrats"<<endl;
	Sleep(1000);
	system ("CLS");
} 

int main(){
string name, NPM, age;	
char pick;
	
cout<< "<==========================================================================>" <<endl;
cout<< "<======================== THE MOST CONFUSING QUIZ==========================>" <<endl;
cout<< "<======================Required 1% of your braincells======================>" <<endl;
cout<< "<======================Don't forget to use your brain======================>" <<endl;
cout<< "<======================             :P               ======================>" <<endl;
cout<< "<==========================================================================>" <<endl;
cout<<endl;
cout<<"Please input your name with NPM"<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<"\nName  : ";getline(cin,name);
cout<<"NPM	: ";getline(cin,NPM);
cout<<"Age	: ";cin>>age;
cout<<"\n-----------------------------------------------"<<endl;
cout<<"Press enter to PLAY THE GAME!!!!";
cout<<"\n-----------------------------------------------"<<endl;
getch();
system("cls");
			do {
			system ("cls");
		cout<<"()                                                                                                                  ()"<<endl;
		cout<<"()                                                                                                                  ()"<<endl;
		cout<<"()                                                                                                                  ()"<<endl;
		cout<<"()                                                                                                                  ()"<<endl;
		cout<<"()                 Disclamer : THIS IS A TROLLING ENIGMA, DON'T TAKE THIS SERIOUSLY BOZO %                          ()"<<endl;
		cout<<"()                                                                                                                  ()"<<endl;
		cout<<"()                                                                                                                  ()"<<endl;
		cout<<"()                                                                                                                  ()"<<endl;
		cout<<"    "<<endl;
		cout<<"    "<<endl;
		
		
		begining();
	    question();
	    cout<<endl;
	    cout<<"\nwanna do it again? (y/n) = ";
		cin>>pick;
		}while (pick=='Y' || pick=='y');
		system("cls");
	for (int i=0;i<70; i++){
		system("color ");
		gotoxy(i,10);
		cout << "====CONGRATUATIONS, YOU DID IT, Press CTRL+C to exit====";
		Sleep(100);
		gotoxy(i,10);
		cout << "                                                        ";
		if (i==69){
			i=0;
		}
	}
	return 0;
 }

 
