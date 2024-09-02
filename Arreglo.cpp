#include<iostream>
using namespace std;
int main()
{
	int nota1 [3];
	int nota2 [3];
	int sum [3];
	int i;
	//entrada de datos
	cout<<"Notas Consolidado 01: \n";
	for(i=0; i<3;i++)
	{
		cout<<"Ingrese nota: "<<i<<"\n";
		cin>>nota1[i];
	}
	cout<<"\n";
	cout<<"Notas Consolidado 02: \n";
	for(i=0;i<3;i++)
	{
		cout<<"Ingrese nota: "<<i<<"\n";
		cin>>nota2[i];
	}
	cout<<"Sumando las notas: ";
	for(i=0;i<3;i++)
	{
		sum[i] = nota1[i]+ nota2[i];
	}
	//salida
	cout<<"El resultado de la suma es: ";
	for(i=0;i<3;i++)
	{
		cout<<sum[i]<<"\t";
	}
}
