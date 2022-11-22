#include <iostream>
using namespace std;

int main(){
	int u; cout<<"input umur ";cin>>u;
	string st,pr;
	switch (u){
		case 1 ... 3: st = "batita";
			pr = "lagi lucu-lucunya";break;
		case 4 ... 5: st = "balita";
			pr = "masih lucu";break;	
	} cout<<st<<endl<<pr<<endl;
}
