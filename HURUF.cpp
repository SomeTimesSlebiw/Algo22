#include <iostream>
using namespace std;

int main(){
	char huruf;
	cout<<"Masukkan huruf : ";cin>>huruf;
	switch (huruf){
		case 'a': cout<<"satu";break;
		case 'b': cout<<"dua";break;
		case 'c': cout<<"tiga";break;
		case 'd': cout<<"empat";break;
		case 'e': cout<<"lima";break;
		default: cout<<"bukan huruf / angka yang tertera";
	}
}


