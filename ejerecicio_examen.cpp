#include<iostream>
using namespace std;

struct Direccion{
	string calle;
	int UV;
	int Nro_casa;
	string Barrio;
	string detalles;
	
};
struct cliente{
	int id_cliente;
	string nombre;
	Direccion direccion;
	int habitacion;
	int dias;
	int comidas;
};

struct alumno{
	int registro;
	string nombre;
	Direccion direccion;
	string email;
	bool Cancela_matricula;
};

cliente Leer_cliente(int id);
float calc_importe_restaurante(float precio_comida);
float calc_importe_habitacion(float precio_habitacion);
float calc_total_factura(int id_cliente, float tot_rest, float tot_hab);
alumno Leer_Alumno();
void Enviar_correo(alumno Alumno1);
string Obtener_correo();

int main(){
	
	
}
