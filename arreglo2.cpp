#include<iostream>
using namespace std;
void suma(int a[3], int b[3])
{
	int suma[3], i;
	for(i=0;i<3;i++)
	{
		suma[i]=a[i]+b[i];
		cout<<suma[i];
	}
	
}
int main()
{
	int i, a[3];
	int b[3];
	//entrada de datos
	cout<<"Valores Vector A: \n";
	for(i=0; i<3; i++)
	{
		cout<<"Ingrese elemento A["<<i<<"]: ";
		cin>>a[i];
	}
	cout<<"Valores Vector B: \n";
	for(i=0; i<3; i++)
	{
		cout<<"Ingrese elemento A["<<i<<"]: ";
		cin>>b[i];
	}
	suma(a,b);
	
}
