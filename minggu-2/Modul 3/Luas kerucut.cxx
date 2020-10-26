#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
 int main()
 {
     float r_alas, p_pelukis, luas_alas, luas_selimut;
     const float phi=3.14;
     awal:
     cout<<"Program Menghitung Luas Permukaan Kerucut"<<endl;
     cout<<"-----------------------------------------"<<endl;
     cout<<"Masukkan nilai jari-jari alas  : ";     
	 cin>>r_alas;
     cout<<"Masukkan panjang garis pelukis : ";     
	 cin>>p_pelukis;
     luas_alas=phi*r_alas*r_alas;
	 luas_selimut=phi*r_alas*p_pelukis;
cout<<"luas alas = " <<luas_alas<<endl; 
cout<<"Luas permukaan kerucut = " <<(luas_selimut+luas_alas);         
}
