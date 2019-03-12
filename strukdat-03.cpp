/*
Nama : Muhamad Farid Ridho Rambe
NPM : 140810180033
Nama Program : strukdat-03
Tanggal Buat : 12/03/2019
Deskripsi : Mencetak luas,diagonal, dan keliling segiempat
*/
#include <iostream>
#include <math.h>
using namespace std;

typedef struct{
	float panjang;
	float lebar;
} segiempat;

void input (segiempat *s){
	cout<<"Masukkan Panjang : ";
	cin>>s->panjang;
	cout<<"Masukkan Lebar : ";
	cin>>s->lebar;
}

float keliling (segiempat s){
	return  (s.panjang+s.lebar)*2;
}

float luas (segiempat s){
	return  s.panjang*s.lebar;
}

float diagonal (segiempat s){
	return sqrt(pow(s.panjang,2)+pow(s.lebar,2));
}

void print(segiempat *s){
	cout<<"Panjang : "<<s->panjang<<endl;
	cout<<"Lebar : "<<s->lebar<<endl;
	cout<<"Keliling = "<<keliling(*s)<<endl;
	cout<<"Luas = "<<luas(*s)<<endl;
	cout<<"Diagonal = "<<diagonal(*s)<<endl;
}

int main(){
	segiempat* sg;
	sg = new segiempat;
	input(sg);
	print(sg);
}
