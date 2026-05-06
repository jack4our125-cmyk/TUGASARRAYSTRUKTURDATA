#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int datajual[3][3]={
	{150,159,230}
	,{100,125,150}
	,{210,125,156}};
	
cout << "==========================================" << endl;
cout << "No\t2021\t2022\t2023" << endl;
cout << "==========================================" << endl;

for(int i=0;i<3;i++){
	cout<<i+1<<"\t";
	for(int j=0;j<3;j++){
		cout<<datajual[i][j]<<"\t";
	}
	cout<<endl;
}
	cout<<"======================================"<<endl;
}
