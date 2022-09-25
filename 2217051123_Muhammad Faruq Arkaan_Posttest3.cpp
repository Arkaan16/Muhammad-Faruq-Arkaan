#include <iostream>
using namespace std;
int main(){
	int Tahun;
	cin>>Tahun;
	
	if(Tahun %400==0){
		cout<<"Tahun Kabisat"<<endl;
	}else if(Tahun%400!=0 && Tahun%100==0){
		cout<<"Bukan Tahun Kabisat"<<endl;
	}else if(Tahun%400!=0 && Tahun%100!=0 && Tahun%4==0){
		cout<<"Tahun Kabisat"<<endl;
	}else if(Tahun%400!=0 && Tahun%100!=0 && Tahun%4!=0){
		cout<<"Bukan Tahun Kabisat"<<endl;
	}
	
}
