#include <iostream>
using namespace std;

int main (){
	int n;
	
	string b;
	b = "";
	
	cout<<"Inserisci Valore Decimale = ";
	cin>>n;
	
	while(n>0){
		if (n%2==0)
				b = '0' + b;
		else
				b = '1' + b;
				
		n=n/2;			 
	}
	cout<<"Valore in Binario = "<<b;
	
	return 0;
}
