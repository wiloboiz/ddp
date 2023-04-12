#include <iostream>
#include <iomanip>
#define jumlah_mata 4
using namespace std;
int main (){
	
	float fisika[10] , matematika[10] , kimia[10] , biologi[10];
	float total[10] , mean[10] , total_1 , total_2 , total_3 , total_4;
	int batas_data;
	char nama[11][11];
	
	cout << " Masukan Banyak Data : ";
	cin >> batas_data;
	
	for (int w = 0 ; w < batas_data ; w++){
		cout << "----------------------\n";
		cout << " Data Ke- " << w + 1 << "\n";
		cout << "----------------------\n";
		cout << " Nama Panggilan : ";
		cin >> nama[w];
		cout << " Nilai Fisika : ";
		cin>> fisika[w];
		cout << " Nilai Matematika : ";
		cin >> matematika[w];
		cout << " Nilai Kimia : ";
		cin >> kimia[w];
		cout << " Nilai Biologi :";
		cin >> biologi[w];
		
		total[w] = fisika[w] + matematika[w] + kimia[w] + biologi[w];
		mean[w] = total[w] / jumlah_mata;
		total_1 += fisika[w];
		total_2 += matematika[w];
		total_3 += kimia[w];
		total_4 += biologi[w];
	}
	
	system ("cls");
	
	cout << "-------------------------------------------------------------------------------------------------------------------\n";
	cout << setw(5) << "No" <<setw(10) << " Nama " << setw(20) << " Nilai Fisika " << setw(25) << " Nilai Matematika" << setw(27) << " Nilai Kimia" << setw(29) << " Nilai Biologi  " << setw(30) << "\n";
	cout << "-------------------------------------------------------------------------------------------------------------------\n";
	
	for (int x = 0 ; x < batas_data ; x++){
		int no = x + 1;
		cout << setw(4) << no << setw(11) << nama[x] << setw(14) << fisika[x] << setw(22) << matematika[x] << setw(29) << kimia[x] << setw(30) << biologi[x] << setw(15) << "\n";
		cout << "-------------------------------------------------------------------------------------------------------------------\n";
	}
	
	cout << "\nRata-Rata Tiap Mahasiswa : \n";
	for (int y = 0 ; y < batas_data ; y++){
		cout << nama[y] << "\t : " << mean[y] << "\n";
	}
	
	cout << "\nRata-Rata Tiap Mata Kuliah :\n ";
	for (int z = 0 ; z < 1 ; z++){
		cout << "Fisika\t\t: " << (total_1) / batas_data << endl;
		cout << " Matematika\t: " << (total_2) / batas_data << endl;
		cout << " Kimia\t\t: " << (total_3) / batas_data << endl;
		cout << " Bilogi\t\t: " << (total_4) / batas_data << endl;
	}
}
