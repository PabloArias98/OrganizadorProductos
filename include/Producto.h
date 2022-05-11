#include "Header.h"
using namespace std;

class Producto
{
	string nombre;
	string descripcion;
	int stock;
	float precio;
public:
	Producto(string, string, int, float);
	string getNombre();
	string getDescripcion();
	int getStock();
	float getPrecio();
};

