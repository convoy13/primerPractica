#include<iostream>
using namespace std;

struct Persona1{
	char Nombre[30];
	char Edad[4];
	
}Persona, Persona2;

int main(){
	cout<<"Nombre: ";
	cin.getline(Persona2.Nombre,30,'\n');
	cout<<"Edad: ";
	cin.getline(Persona2.Edad,4);
	cout<<" "<<endl;
	cout<<"Su Nombre Es: "<<Persona2.Nombre<<endl;
	cout<<"Su Edad Es:  "<<Persona2.Edad<<endl;
	system("pause");
	return 0;
}
