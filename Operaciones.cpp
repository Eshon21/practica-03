#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Spanish");
	int a,b;
	a=23;
	b=34;
	cout<<"PROGRAMA DE OPERACIONES CON BITS \n";
	cout<<"================================= \n";
	cout<<"Operador lógico AND (&) \n";
	cout<<" 1 & 1 = 1 \n";
	cout<<" 1 & 0 = 0 \n";
	cout<<" 0 & 1 = 0 \n";
	cout<<" 0 & 0 = 0 \n";
	cout<<a<<" & "<<b<<" = "<<(a&b)<<"\n";
	cout<<"Operador lógico OR (|) \n";
	cout<<" 1 & 1 = 1 \n";
	cout<<" 1 & 0 = 1 \n";
	cout<<" 0 & 1 = 1 \n";
	cout<<" 0 & 0 = 0 \n";
	cout<<a<<" & "<<b<<" = "<<(a|b)<<"\n";
	cout<<"Operador lógico XOR (^) \n";
	cout<<" 1 & 1 = 0 \n";
	cout<<" 1 & 0 = 1 \n";
	cout<<" 0 & 1 = 1 \n";
	cout<<" 0 & 0 = 0 \n";
	cout<<a<<" & "<<b<<" = "<<(a^b)<<"\n";
	cout<<"\n";
	cout<<"DEPLAZAMIENTO A LA IZQUIERDA (<<) \n";
	cout<<" 1 (10) = 00000001(2) \n";
	cout<<"Desplazando una posición de bit a la izquierda : "<<"00000010(2) = " <<(1<<1)<<"(10) \n"; 
	cout<<"Desplazando dos posiciones de bit a la izquierda : "<<"00000100(2) = " <<(1<<2)<<"(10) \n"; 
	cout<<"Desplazando dos posiciones de bit a la izquierda : "<<"00001000(2) = " <<(1<<3)<<"(10) \n"; 
}
