#include <iostream>
using namespace std;

int main(){
	int j; cout<<"input jenis kamar ";cin>>j;
	string km; int h;
	switch (j){
		case 1: km = "vvip";h=100000;break;
		case 2: km = "vip";h=750;break;	
	} 
	cout<<"Kamar : "<<km<<endl;
	cout<<"Harga : "<<h<<endl;
}
