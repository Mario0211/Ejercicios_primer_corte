class animalZoologico{
private:
	char nombre [10];
	char tipo [15];
	int dia,mes,anio,pes;
	bool salud=false;
	public:



animalZoologico()
{
    nombre= char _nombre[10];
	tipo= char _tipo[15];
	dia= _dia;
	mes= _mes;
	anio= _anio;
	peso= _peso;
	salud= _salud;
}
void revision()
{
	int dp;
	cout<<"Fecha de ultima revision "<<dia<<"/"<<mes<<"/"<<anio<<endl;
	cout<<"Fecha atual"<<dia2<<"/"<<mes2<<"/"<<anio2<<endl;
	dp=dia2-dia;
	cout<<"dias pasados: "<<dp<<endl
	cout<<"Peso= "<<_peso<<"kg"<<endl;
	cout<<"salud="<<_salud<<endl;

}
void alimentar()
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
};
