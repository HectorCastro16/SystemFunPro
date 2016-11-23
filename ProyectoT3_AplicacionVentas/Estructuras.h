#pragma once
#include "string"

using namespace std;
ref class Estructuras
{
public:
	Estructuras(void);
};

struct Usuario{
	int idusuario;
	int idempleado;
	string usu;
    string cla;
	int estado;
};

struct FechaNacimiento{
	int dia;
	int mes;
	int annio;
};

struct Empleado{
	int idempleado;
	string dni;
	string nombres;
	string apellidos;
	FechaNacimiento fecnac;
	int estado;
};

struct Producto{
	int idproducto;
	string descripcion;
	string marca;
	int idcategoria;
	int stockactual;
	double preciocompra;
	double precioventa;
};



