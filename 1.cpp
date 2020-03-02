#include <iostream>
using namespace std;
#include<conio.h>

void main()
{
clrscr();

char *fmen[]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Setiembre","Octubre","Noviembre","Diciembre","ERROR"};

int ano,ip,mes=0,max=0,dia=0,sum=0,tot=365,fal;
int meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

cout<<"Ingrese el a–o : ";
cin>>ano;
if(ano%400==0)
{
meses[1]=29;
tot=366;
}
else{
if(ano%4==0 && ano%100!=0)
{

}

}


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

max=meses[ip];

}while(ip==12);

do{
cout<<"Ingrese el dia : ";
cin>>dia;
if(dia>max)

{
cout<<"ERROR Numero de dia no existente";
}
}
while(dia>max);


for (int a=ip-1;a=0;a++)
{
sum=meses[a];
}

//nueva fecha
int ano2,ip2,mes2=0,max2=0,dia2=0,;
int mes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

cout<<"Ingrese el a–o : ";
cin>>ano2;
if(ano2%400==0)
{
mes[1]=29;
tot=366;
}
else{
if(ano2%4==0 && ano2%100!=0)
{

}

}


do{
cout<<"Ingrese el mes : ";
cin>>mes2;

switch(mes2)
{
case 1:
ip2=0;
break;
case 2:
ip2=1;
break;
case 3:
ip2=2;
break;
case 4:
ip2=3;
break;
case 5:
ip2=4;
break;
case 6:
ip2=5;
break;
case 7:
ip2=6;
break;
case 8:
ip2=7;
break;
case 9:
ip2=8;
break;
case 10:
ip2=9;
break;
case 11:
ip2=10;
break;
case 12:
ip2=11;
break;
default:
ip2=12;
cout<<"ERROR tal numero de mes no existe";
break;
}

max=mes[ip];

}while(ip==12);

do{
cout<<"Ingrese el dia : ";
cin>>dia2;
if(dia>max2)

{
cout<<"ERROR Numero de dia no existente";
}
}
while(dia2>max2);


for (int a=ip-1;a=0;a++)
{
sum=mes[a];
}
//termina nueva fecha
float x,y,z;
if(ano!=ano2){
	x=(ano2*365)-(ano*365);

 	if(fmen[ip]!=mes[ip]){
 		y=(mes[ip]*max)-(fmen[ip]*max);
 	}
 		if(dia!=dia2){
 			z=dia2-dia;
 			}
}

sum=x+y+z;
cout<<"De la fecha : "<<dia<<" de "<<fmen[ip]<<" del "<<ano<<"\n";
cout<<"Los dias transcurridos desde el: "<<dia2<<"de"<<mes[ip]<<"del"<<ano2<<"\n";



getch();
}
