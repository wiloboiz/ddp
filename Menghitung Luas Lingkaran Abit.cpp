#include <iostream>
using namespace std;

int main(){
    const float phi = 3.14;
    float L, r;

    //nilai dari r
    cout<<"masukkan jari-jari lingkaran =";
    cin>>r;

    //penghitungan luas
    L = phi * r * r;

    //penampil hasil
    cout<<"Luas lingkaran dengan jari-jari "<<r<<" cm"<<" adalah";
    cout<<L<<" cm2";
}
