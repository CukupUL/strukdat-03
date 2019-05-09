/*
Program		: Struct Segiempat
Nama		: Nurul Ma'arif
NPM	/ Kelas	: 140810180040
Deskripsi	: Program ini berfungsi untuk mencetak nilai segiempat seperti panjang, luas, dll.
Tanggal		: 2019/03/13
*/
#include<iostream>
#include<math.h>
using namespace std;

typedef struct{
	float panjang;
	float lebar;
}segiempat;

void input(segiempat *s){
	cout<<"Input segiempat"<<endl;
	cout<<"Panjang\t: ";cin>>s->panjang;
	cout<<"Lebar\t: ";cin>>s->lebar;
}
float keliling(segiempat s){
	return((2*s.lebar)+(2*s.panjang));
}
float luas(segiempat s){
	return(s.lebar*s.panjang);
}
float diagonal(segiempat s){
	return(sqrt((s.lebar*s.lebar)+(s.panjang*s.panjang)));
}
void print(segiempat s){
	system("CLS");
	cout<<"Data Segiempat"<<endl;
	cout<<"Panjang\t\t: "<<s.panjang<<endl;
	cout<<"Lebar\t\t: "<<s.lebar<<endl;
	cout<<"Diagonal\t: "<<diagonal(s)<<endl;
	cout<<"Luas\t\t: "<<luas(s)<<endl;
	cout<<"Keliling\t: "<<keliling(s)<<endl;
}

int main(){
   segiempat* sg;
   sg=new segiempat;
   input(sg);
   print(*sg);
}
