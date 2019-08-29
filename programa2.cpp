#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int valor, *puntero;
	int mayor=INT_MIN;
	int arreglo[10];
	puntero=&arreglo[0];
	
	
	for (int i=0; i<=9; i++){
	    cout<<"ingresa los valores:"<<endl;
	    cin>>arreglo[i];
	}
	for( int *puntero=&arreglo[0]; puntero<=&arreglo[9]; puntero++){
		if(*puntero>mayor) mayor=*puntero;
	}
	cout<<"el valor mayor es: "<<mayor<<endl; 
	return 0;
}

