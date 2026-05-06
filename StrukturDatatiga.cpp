#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Pesanan{
	char kode;
	string jenis;
	int harga;
	int banyak;
	int jumlahharga;
};

int main(){
	int banyakjenis;
	Pesanan daftarpesanan[100];
	long totalbayarsebelumpajak=0;
	
	cout<<"GEROBAK FRIED CHIKEN"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"KODE JENIS HARGA"<<endl;
	cout<<"D Dada Rp.2500"<<endl;
	cout<<"P Paha Rp.2000"<<endl;
	cout<<"S Sayap Rp.1500"<<endl;
	cout<<"---------------------"<<endl<<endl;
	
	cout<<"Banyak Jenis Pesanan : "; cin>>banyakjenis;
	
	for (int i= 0;i<banyakjenis;i++){
		cout<<"Jenis Ke -"<<i+1<<endl;
		cout<<"Jenis Potong[D/P/S]: "; cin>>daftarpesanan[i].kode;
		cout<<"Banyak Potong : ";cin>>daftarpesanan[i].banyak;
		
		if(daftarpesanan[i].kode =='D'||daftarpesanan[i].kode=='d'){
			daftarpesanan[i].jenis="Dada";
			daftarpesanan[i].harga=2500;
		}else if(daftarpesanan[i].kode=='P'||daftarpesanan[i].kode=='p'){
			daftarpesanan[i].jenis="Paha";
			daftarpesanan[i].harga=2000;
		}else if (daftarpesanan[i].kode == 'S'|| daftarpesanan[i].kode == 's'){
			daftarpesanan[i].jenis="sayap";
			daftarpesanan[i].harga=1500;
		}else{
			daftarpesanan[i].jenis="-----";
			daftarpesanan[i].harga=0;
		}
		
		daftarpesanan[i].jumlahharga = daftarpesanan[i].harga*daftarpesanan[i].banyak;
		totalbayarsebelumpajak += daftarpesanan[i].jumlahharga;
		cout<<"-----------------------------"<<endl;
	}
	//output
	double pajak=totalbayarsebelumpajak*0.10;
	double totalbayarakhir = totalbayarsebelumpajak + pajak;
	
	cout << "\n\nGEROBAK FRIED CHICKEN" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "No.  Jenis      Harga      Banyak      Jumlah" << endl;
    cout << "     Potong     Satuan     Beli        Harga" << endl;
    cout << "---------------------------------------------------------" << endl;
    
    for(int i=0;i<banyakjenis;i++){
    	cout<<setfill(' ')<<setw(2)<<i+1<<" ";
    	cout<<left<<setw(10)<<daftarpesanan[i].jenis;
    	cout<<"Rp"<<setw(7)<<daftarpesanan[i].harga;
    	cout<<setw(11)<<daftarpesanan[i].banyak;
    	cout<<"Rp"<<daftarpesanan[i].jumlahharga<<endl;
	}
	cout << "---------------------------------------------------------" << endl;
	cout << "                            Jumlah Bayar Rp "<< totalbayarsebelumpajak<<endl;
	cout << "                            Pajak 10     Rp "<<pajak<<endl;
	cout << "                            Total Bayar  Rp "<<totalbayarakhir<<endl;
	
}
