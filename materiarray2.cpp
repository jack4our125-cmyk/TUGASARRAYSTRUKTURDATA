#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int i;
	string nama[3];
	float nilai1[3];
	float nilai2[3];
	float hasil[3];
	for(i=0;i<3;i++){
		cout<<"masukan nama: ";
		cin>>nama[i];
		cout<<"masukan nilai1: ";
		cin>>nilai1[i];
		cout<<"masukan nilai2: ";
		cin>>nilai2[i];
		hasil[i]=(nilai1[i]+nilai2[i])/2;
		cout<<endl;
	}
	system("cls");
	cout<<"\n==============Data Nilai Siswa============\n";
	for(i=0;i<3;i++){
		cout<<"\nNama : "<<nama[i];
		cout<<"\nNilai1 : "<<nilai1[i];
		cout<<"\nNilai2 : "<<nilai2[i];
		cout<<"\nRata rata Nilai : "<<hasil[i]<<endl;
	}
	cout<<"\n===================================\n";
	cout<<"NO Nama UTS UAS Hasil\n";
	cout<<"=====================================\n";
	for(i=0;i<3;i++){
		cout<<setiosflags(ios::left)<<setw(3)<<i+1<<setw(13);
		cout<<nama[i]<<setw(4)<<nilai1[1]<<setw(4);
		cout<<nilai 2[i]<<setw(4)<<hasil[i]<<endl;
	}
}

