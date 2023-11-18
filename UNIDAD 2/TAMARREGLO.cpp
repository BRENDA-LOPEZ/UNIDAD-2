#include<iostream>
using namespace std;
int main (){
	const int tamarreglo = 5;
	int numero[tamarreglo];
	
	for(int a=0; a<tamarreglo; a++){
		cout<<"ingrese numero"<<a+1<<":";
		cin>>numero[a];
	}
	
	cout<<"los numeros ingresados son:";
	for (int a=0; a<=tamarreglo; a++){
		cout<<numero[a]<<"";
	}
	cout<<endl;
	return 0;
}
