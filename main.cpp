#include <codecvt>
#include <locale>

#include "Header.h"
#include "Producto.h"

using namespace std;

vector<Producto> listaProductos;
int resp = 434;

int mostrarMenu();
void rellenarEjemplos();



int main()
{
	//Variables temporales
	string nombre, descripcion;
	wstring wnombre, wdescripcion, cadenaInsert;
	char resp = 'f';
	int stock;
	float precio;
	Producto prod = Producto("", "", 0, 0.0);


	//Rellenamos antes el array
	rellenarEjemplos();

	//Damos la bienvenida
	cout << "Bienvenido al Organizador de Productos!!!" << endl;
	cout << "\n";


	do {
		switch (resp = mostrarMenu())
		{

		case 1:

			//Rellenamos datos
			cout << "Introduzca el nombre del producto: " << endl;
			cin.clear();
			cin >> nombre;
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Introduzca la descripcion: " << endl;
			cin >> descripcion;
			fflush(stdin);
			cout << "El stock de existencias:  " << endl;
			cin >> stock;
			fflush(stdin);
			cout << "El precio (en decimales y punto):  " << endl;
			cin >> precio;

			//Agregamos
			prod = Producto(nombre, descripcion, stock, precio);
			listaProductos.push_back(prod);

			//Notificamos
			cout << "\n";
			cout << "####### PRODUCTO AGREGADO #######!!!" << endl;
			cout << "\n";
			break;



		case 2:

			//Función todavía no creada
			cout << "En futuras versiones, versión en desarrollo!" << endl;
			fflush(stdin);
			break;

		case 3:

			//Listamos productos
			cout << "\n";
			cout << "####### LISTADO DE PRODUCTOS #######" << endl;
			for (Producto pos : listaProductos) {
				cout << "Producto: " << pos.getNombre() << ", " << pos.getDescripcion() << ", stock de: " << pos.getStock() << " unidades y #### Valor de: " << pos.getPrecio() << " euros" << endl;
			}
			cout << "\n";
			fflush(stdin);
			break;

		case 0:

			cout << "Gracias por confiar en nosotros, hasta la proxima!!!" << endl;
			break;

		default:

			cout << "------------------------------------" << endl;
			cout << "Operación invalida" << endl;
			cout << "------------------------------------" << endl;
			break;

		}
	} while (resp != 0);


}

int mostrarMenu() {
	cout << "##### ELIJA QUE DESEA HACER? #####" << endl;
	cout << "1 - Introducir nuevo producto" << endl;
	cout << "2 - Listar productos desde la BD" << endl;
	cout << "3 - Listar productos" << endl;
	cout << "------------------------------" << endl;
	cout << "0 - Salir" << endl;
	cout << "Escriba, que elige?:  ";
	cin >> resp;
	cout << resp << endl;
	return resp;
}

void rellenarEjemplos() {

	Producto prod1 = Producto("Staedtler Noris", "ISBN 3342343", 2000, 1.34);
	Producto prod2 = Producto("Milan 323", "ISBN 3223333", 110, 0.33);
	Producto prod3 = Producto("Portafolio Senior", "ISBN 3311113", 2300, 23.23);
	Producto prod4 = Producto("Parker IM Gold", "ISBN 333243", 10, 55.43);
	Producto prod5 = Producto("Paquete 1000 folios", "ISBN 1111343", 2123, 33.2);

	listaProductos.push_back(prod1);
	listaProductos.push_back(prod2);
	listaProductos.push_back(prod3);
	listaProductos.push_back(prod4);
	listaProductos.push_back(prod5);
}
