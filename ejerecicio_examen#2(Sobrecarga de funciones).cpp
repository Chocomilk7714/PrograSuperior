#include<iostream>
using namespace std;

struct Direccion{
	string calle;
	string Barrio;
	int UV;
	int Nro_casa;
	string detalles;
	
};
struct cliente{
	int id_cliente;
	string nombre;

};
void imprime(string nombre,string calle, string ciudad,int codigo_postal);
void imprime(Direccion direccion);
void imprime(cliente reg);
int main(){
	imprime("Juan Perez","Calle Beni","Santa Cruz",100);
	Direccion direccion={"Motacu","mangeles",49,3842,"a lado del parque"};
	imprime(direccion);
	cliente Cliente={45,"Juan rios"};
	imprime(Cliente);
}

void imprime(string nombre,string calle, string ciudad,int codigo_postal){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Calle: "<<calle<<endl;
	cout<<"Ciudad: "<<ciudad<<endl;
	cout<<"Codigo Postal: "<<codigo_postal<<endl;
}

void imprime(Direccion direccion){
	cout<<"Calle: "<<direccion.calle<<endl;
	cout<<"Barrio: "<<direccion.Barrio<<endl;
	cout<<"UV: "<<direccion.UV<<endl;
	cout<<"Nro Casa: "<<direccion.Nro_casa<<endl;
	cout<<"Detalles: "<<direccion.detalles<<endl;
}

void imprime(cliente reg){
	cout<<"Id cliente: "<<reg.id_cliente<<endl;
	cout<<"Nombre: "<<reg.nombre<<endl;
}
