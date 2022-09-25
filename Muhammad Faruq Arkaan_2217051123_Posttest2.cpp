#include <iostream>
using namespace std;
int main(){
	int harga;
	int diskon=10;
	
	cin>>harga;
		
	//output
	
	cout<<"Harga baju setelah diskon: "<<harga-(diskon/100.0)*harga<<endl;
	cout<<"Diskon yang didapatkan: "<<(diskon/100.0)*harga<<endl;
	
	return 0;
}
