#include <iostream>
using namespace std;
int main(){
    
    int bilangan;
    cin >> bilangan;
    
    if (bilangan==2||bilangan==3||bilangan==5||bilangan==7||bilangan==11||bilangan==13||bilangan==17||bilangan==23||bilangan==29){
        cout<<"Bilangan Prima"<<endl;
    }
    else{
        cout<<"Bukan Bilangan Prima"<<endl;
    }
    return 0;
}
