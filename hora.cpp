#include<iostream>
#include "hora.h"

hora::hora()
{
    ip=0;
    mes=0;
    maxi=0;
    dia=0;
    sum=0;
    fal=0;
    hora_=0;
    homax=24;
}
void hora::operaciones(){
do{
cout<<"Ingrese el mes : ";
cin>>mes;

switch(mes)
{
case 1:
ip=0;
break;
case 2:
ip=1;
break;
case 3:
ip=2;
break;
case 4:
ip=3;
break;
case 5:
ip=4;
break;
case 6:
ip=5;
break;
case 7:
ip=6;
break;
case 8:
ip=7;
break;
case 9:
ip=8;
break;
case 10:
ip=9;
break;
case 11:
ip=10;
break;
case 12:
ip=11;
break;
default:
ip=12;
cout<<"ERROR tal numero de mes no existe";
break;
}

maxi=meses[ip];

}while(ip==12);

do{
cout<<"Ingrese el dia : ";
cin>>dia;
if(dia>maxi)

{
cout<<"ERROR Numero de dia no existente";
}
}
while(dia>maxi);
do{
    cout<<"Ingrese las horas transcurridas el dia de hoy :";
cin>>hora;
if(hora>homax){
    cout<<"ERROR DE HORA, NO EXISTE";
}

}
while(hora>homax);

for (int a=0; a<=ip-1c; a++){
sum+=meses[a];}


fal=(sum+(dia-1))*24+hora;


cout<<"De la fecha : "<<dia<<" de "<<fmen[ip]<<" del 2020 \n";
cout<<"la ultima hora de actualizacion son : "<<fal<<"\n";


getch();
}