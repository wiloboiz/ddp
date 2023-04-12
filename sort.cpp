#include<iostream>
using namespace std;

int main(){
	int arr [5]={10,5,15,0,12};
	bool swap;
	
	int temp;
	int indexOfLastUnsortedElement=4;
	
	do{
		swap=false;
		for(int i=0;i<indexOfLastUnsortedElement;i++){
			if(arr[i]<arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				swap=true;
			}
		}indexOfLastUnsortedElement--;
	}while(swap);
	
	
	cout<<"Sesudah di sorting:";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}
