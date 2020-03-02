#include <iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>
#include <conio.h>
#include "animalZoologico.h"


animalZoologico::animalZoologico( char _nombre , char _tipo,int _dia,int _mes, int _anio,int _peso, bool _salud)
{
	cin.getline(nombre,30,'\n');
    cin.getline(tipo,30,'\n');
	dia= _dia;
	mes= _mes;
	anio= _anio;
	pes= _peso;
	salud= _salud;
}
void animalZoologico::revision(int dia,int mes, int anio, int dia2, int mes2, int anio2)
{
	int dp;
	cout<<"Fecha de ultima revision "<<dia<<"/"<<mes<<"/"<<anio<<endl;
	cout<<"Fecha atual"<<dia2<<"/"<<mes2<<"/"<<anio2<<endl;
	dp=dia2-dia;
	cout<<"dias pasados: "<<dp<<endl;
	cout<<"Peso= "<<pes<<"kg"<<endl;
	cout<<"salud="<<salud<<endl;

}
void animalZoologico::alimentar(int hora1,int hora2)
{
	int dif,fal;
	if((hora2||hora1)>24)
	{
		cout<<"hora invalida "<<endl;
		return;
	}
	else{
	dif=hora2-hora1;
	}
	if(dif<7)
	{
		fal=7-dif;
		cout<<"faltan "<<fal<<"hrs para poder alimentar"<<endl;
	}
	else if(dif>=7)
	{
		cout<<"alimentando al animal"<<endl;
	}

	}



int main(){
	char _nom [30];
	char _tip[30];
	int _di,hor1,hor2,d1,d2,m1,m2,a1,a2;
	int _me;
	 int _an;
	 int pes;
	  bool _sal;

	cout<<"Nombre: "<<endl;
	cin.getline(_nom,30,'\n');
	cout<<"Tipo: "<<endl;
	cin.getline(_tip,30,'\n');
	cout<<"dia de nacimiento: "<<endl;
	cin>>_di;
	cout<<"mes de nacimiento: "<<endl;
	cin>>_me;
	cout<<"a–o de nacimiento: "<<endl;
	cin>>_an;
	cout<<"Peso: "<<endl;
	cin>>pes;
	cout<<"salud: "<<endl;
	cin>>_sal;
	animalZoologico miAnimal(char _nom,char _tip,int _di,int _me,int _an,int pes,bool _sal);
	cout<<"Dame la hora de su ultimo alimento: "<<endl;
	cin>>hor1;
	cout<<"Dame la hora actual: "<<endl;
	cin>>hor2;
	miAnimal.alimentar(hor1,hor2);
	cout<<"dia de su ultima revision"<<endl;
	cin>>d1;
	cout<<"mes de su ultima revision"<<endl;
	cin>>m1;
	cout<<"a–o de su ultima revision"<<endl;
	cin>>a1;
	cout<<"dia actual"<<endl;
	cin>>d2;
	cout<<"mes actual"<<end;
	cin>>m2;
	cout<<"a–o actual"<<end;
	cin>>a2;

	miAnimal.revision(d1,m1,a1,d2,m2,a2)
}
