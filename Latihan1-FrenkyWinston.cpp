#include <iostream>
using namespace std;

int main (){
	string nama,nh,pr;
	int tugas,uts,uas,n;
	
	cout<<"Masukkan nama anda : ";cin>>nama;
	cout<<"Nilai tugas : ";cin>>tugas;
	cout<<"Nilai UTS : ";cin>>uts;
	cout<<"Nilai UAS : ";cin>>uas;
	
	n=(tugas+uts+uas)/3;
	switch (n){
		case 0 ... 20:
		nh = "E"; pr = "Mendekati cukup";break;
		case 21 ... 40: 
		nh = "D"; pr = "Cukup";break;
		case 41 ... 60:
		nh = "C"; pr = "Baik";break;
		case 61 ... 80:
		nh = "B"; pr = "Amat Baik";break;
		case 81 ... 100:
		nh = "A"; pr = "Istimewa";break;
		default : cout<<"Anda kurang beruntung";		
	} cout<<endl<<"Selamat "<<nama<<endl;
	  cout<<"Nilai Anda : "<<n<<endl;
	  cout<<"Nilai Huruf : "<<nh<<endl;
	  cout<<"Predikat : "<<pr<<endl;
}
