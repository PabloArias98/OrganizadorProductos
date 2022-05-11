#include "Producto.h"

Producto::Producto(string _nombre, string _descripcion, int _stock, float _precio)
{
    nombre = _nombre;
    descripcion = _descripcion;
    stock = _stock;
    precio = _precio;
}
string Producto::getNombre() {
    return nombre;
}
string Producto::getDescripcion() {
    return descripcion;
}
int Producto::getStock() {
    return stock;
}
float Producto::getPrecio() {
    return precio;
}
