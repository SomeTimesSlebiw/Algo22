#include <iostream>
using namespace std;

int main(){
	int total_belanja;
	char member;
	cout<<"Masukkan total belanja: ";cin>>total_belanja;
	cout<<"Apakah anda member? (y/t)";cin>>member;
	if (total_belanja>1000000){
		if (member == 'y'|| member == 'Y'){
			cout<<"Potongan 35000"<<endl;// JIKA USER MENGISI DENGAN HURUF y ATAU Y MAKA AKAN MENDAPATKAN POTONGAN 35000 SEDANGKAN SI USER MENGISI SELAIN y atau Y AKAN MENDAPAT POTONGAN 25000
		}else{
			cout<<"Potongan 20000"<<endl;
		}
	} else{
		cout<<"Potongan 0"<<endl;
	}
}
