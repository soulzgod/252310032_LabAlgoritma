#include <iostream>
using namespace std;

int main(){
	int nilai[10];
	
	cout<<"Masukan 10 bilangan: "<<endl;
	for(int i=0;i<10;i++){
		cout<<"Nilai ke-"<<i+1<<":";
		cin>>nilai[i];
	}
	cout<<"\nBilangan genap:" <<endl;
	for(int i=1;i<10;i++){
		if(nilai[i]%2==0)
			cout<<nilai[i]<<" ";
	}
	
	cout<<"\nBilangan ganjil:"<<endl;
	for(int i=1;i<10;i++){
		if(nilai[i]%2!=0)
			cout<<nilai[i]<<" ";
	}
	cout<<endl;
	return 0;
}
