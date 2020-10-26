#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main (){
	string nama;
	string nim;
	string plug;
	
	cout<<"Masukan : "<<endl<<endl;
	cout<<"Nama    : ";
	getline (cin, nama); 
	 
	cout<<"NIM     : ";
	getline (cin, nim); 
	 
	cout<<"Plug    : ";
	getline (cin, plug); 
	
	cout<<endl;
	cout<<"Inilah Data Anda : "<<endl; 
	cout<<"Nama    : "<<nama<<endl;
	cout<<"NIM     : "<<nim<<endl;
	cout<<"Plug    : "<<plug<<endl;
	cout<<"Dalam Bentuk Tabel : "<<endl;
	cout<<"=================================================="<<endl;
	cout<<" NIM       |          Nama          |        Plug"<<endl;
	cout<<"=================================================="<<endl;
	cout<<setw(10)<<nim;cout<<" |";cout<<setw(15)<<nama;cout<<"  |";cout<<setw(5)<<plug<<endl;
	return 0;

}
