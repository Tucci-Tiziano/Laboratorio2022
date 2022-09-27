#include <iostream>
#include <vector>
using namespace std;
struct producto{
    int codigo, cant_vendida;
    float precio_costo, precio_venta;
};
struct empleado{
    string nombre, apellido, fecha_nacimiento, fecha_ingreso;
    int dni;
};
struct data {
    vector<producto> productos;
    vector<empleado> empleados;
};
vector<int> llenar_vector(){
    int cant;
    int dni;
    int codigo;
    vector<int> vect;
    cout<<"cantidad de productos"<<endl;
    cin>>cant;
    cout<<"dni del empleado"<<endl;
    cin>>dni;
    vect.push_back(dni);
    for(int i=0; i<cant; i++){
    cout<<"producto "<<i+1<<endl;
    cin>>codigo;
    vect.push_back(codigo);
    }
    return vect;
}
void promedio_ganancia(data &d){
    int cont=0;
    int prom=0;
    producto aux;
    for(int i=0; i<d.productos.size(); i++){
        aux=d.productos[i];
        prom=prom+(aux.cant_vendida*(aux.precio_venta-aux.precio_costo));
        cont++;
    }
    prom=prom/cont;
    cout<<"promedio: "<<prom<<endl;
}
void producto_mas_vendido (data &d){
    producto aux;
    int codigo=0;
    int cant=0;

    for(int i=0; i<d.productos.size(); i++){
        if(aux.cant_vendida>cant){
            codigo=aux.codigo;
            cant=aux.cant_vendida;
        }
    }
    cout<<codigo<<endl;
}

void empleado_mas_viejo
{

}
void empleado_mas_joven{

}

void modificar_producto(data &d){
    int codigo;
    producto aux;
    cout<<"que producto quiere modificar"<<endl;
    cout<<"codigo del producto"<<endl;
    cin>>codigo;
    for(int i=0;i<d.productos.size(); i++){
        aux=d.productos[i];
        if(aux.codigo=codigo){
            cout<<aux.cant_vendida<<endl;
            cout<<aux.precio_costo<<endl;
            cout<<aux.precio_venta<<endl<<endl;
            cout<<"nueva cantidad vendida"<<endl;
            cin>>aux.cant_vendida;
            cout<<"nuevo precio de costo"<<endl;
            cin>>aux.precio_costo;
            cout<<"nueva precio de venta"<<endl;
            cin>>aux.precio_venta;
            d.productos[i]=aux;
        }
    }
}
void eliminar_producto(data &d){
    int codigo, size;
    producto aux;
    cout<<"que producto quiere eliminar"<<endl;
    cout<<"codigo del producto"<<endl;
    cin>>codigo;
    size=d.productos.size()-1;
    for(int i=0;i<d.productos.size(); i++){
        aux=d.productos[i];
        if(aux.codigo=codigo){
            d.productos[i]=d.productos[size];
            d.productos.pop_back();
        }
    }
}
void agregar_producto(data &d){
    int codigo;
    bool error=true;
    producto aux;

    while(error){
        error=false;
        cout<<"codigo"<<endl;
        cin>>aux.codigo;
        cout<<"cantidad de ventas"<<endl;
        cin>>aux.cant_vendida;
        cout<<"precio de costo"<<endl;
        cin>>aux.precio_costo;
        cout<<"precio de venta"<<endl;
        cin>>aux.precio_venta;
        for(int i=0;i<d.productos.size() && !error; i++){
            aux=d.productos[i];
            if(aux.codigo=codigo){
                error=true;
            }
        }
        if(error){
            cout<<"codigo de producto ya existente volver a intentar"<<endl;
        }
    }
    d.productos.push_back(aux);        
}
void modificar_empleado(data &d){
    int dni;
    empleado aux;
    cout<<"que empleado quiere modificar"<<endl;
    cout<<"dni del empleado"<<endl;
    cin>>dni;
    for(int i=0;i<d.empleados.size(); i++){
        aux=d.empleados[i];
        if(aux.dni=dni){
        string nombre, apellido, fecha_nacimiento, fecha_ingreso;
            cout<<aux.nombre<<endl;
            cout<<aux.apellido<<endl;
            cout<<aux.fecha_nacimiento<<endl;
            cout<<aux.fecha_ingreso<<endl<<endl;
            cout<<"nuevo nombre"<<endl;
            cin>>aux.nombre;
            cout<<"nuevo apellido"<<endl;
            cin>>aux.apellido;
            cout<<"nueva fecha de nacimiento"<<endl;
            cin>>aux.fecha_nacimiento;
            cout<<"nueva fecha de ingreso"<<endl;
            cin>>aux.fecha_ingreso;
            d.empleados[i]=aux;
        }
    }
}
void eliminar_empleado(data &d){
    int dni, size;
    empleado aux;
    cout<<"que empleado quiere eliminar"<<endl;
    cout<<"deni del empleado"<<endl;
    cin>>dni;
    size=d.empleados.size()-1;
    for(int i=0;i<d.empleados.size(); i++){
        aux=d.empleados[i];
        if(aux.dni=dni){
            d.empleados[i]=d.empleados[size];
            d.empleados.pop_back();
        }
    }
}
void agregar_empleado(data &d){
    int dni;
    bool error=true;
    empleado aux;

    while(error){
        error=false;
        cout<<"dni"<<endl;
        cin>>aux.dni;
        cout<<"nombre"<<endl;
        cin>>aux.nombre;
        cout<<"apellido"<<endl;
        cin>>aux.apellido;
        cout<<"fecha de nacimiento"<<endl;
        cin>>aux.fecha_nacimiento;
        cout<<"fecha de ingreso"<<endl;
        cin>>aux.fecha_ingreso;
        for(int i=0;i<d.empleados.size() && !error; i++){
            aux=d.empleados[i];
            if(aux.dni=dni){
                error=true;
            }
        }
        if(error){
            cout<<"dni de empleado ya existente volver a intentar"<<endl;
        }
    }
    d.empleados.push_back(aux);        
}

void alta_producto(data &d){
    int eleccion;
    switch (eleccion)
    {
    case 1:
        modificar_producto(d);
    break;
    case 2:
        eliminar_producto(d);
    break;
    case 3:
        agregar_producto(d);
    break;
    }
}
void alta_empleado(data &d){
    int eleccion;
    switch (eleccion)
    {
    case 1:
        modificar_empleado(d);
    break;
    case 2:
        eliminar_empleado(d);
    break;
    case 3:
        agregar_empleado(d);
    break;
    }
}


int main()
{
    data d;
    int eleccion;
    int cant_empleados;
    vector<vector<int>> matriz;
    cout<<"cantidad de emplados"<<endl;
    cin>>cant_empleados;
    for(int i=0; i<cant_empleados; i++){
    vector<int> a=llenar_vector();
    matriz.push_back(a);
    }

    cin>>eleccion;
    switch (eleccion)
    {
    case 1:
        alta_empleado(d);
    break;
    case 2:
        alta_producto(d);
    break;
    case 3:
        promedio_ganancia(d);
    break;
    }





}







/*En una tienda de productos de limpieza se desea calcular el total de ganancia que produjo dicho 
negocio este mes. Cada producto cuenta con un precio de costo, precio de venta, código y cantidad 
vendida hasta el momento en que se consulta. Además, en la tienda trabajan empleados de los que se 
necesita saber el dni, nombre, apellido, fecha de nacimiento, fecha que ingreso a la empresa y 
localidad en la que viven. 
Cada vendedor tiene asignado para vender una determinada cantidad de productos. 
Esto se organiza con una matriz de forma que cada fila será un empleado distinto donde 
la primera columna es el empleado y el resto de las columnas corresponden a cada producto que tiene 
a cargo de vender. Si bien los empleados tienen un sueldo fijo, por cada unidad vendida del producto
que tienen a cargo se les suma a su sueldo fijo la ganancia de ese producto (precio de venta-precio
de costo) Para poder gestionar el sistema de stock de productos y administración del personal 
realizar un programa que me permita:


-Dar de alta nuevos producto, eliminar y modificarlos. 
(Al darlos de alta habrá que asignárselos a un vendedor)

-Dar de alta nuevos empleados, eliminar y modificarlos.

-Calcular la ganancia promedio de los productos que se venden.

-!!!!!!Nombre del empleado con mayor antigüedad en el trabajo junto con la fecha en que inició.

-Código del producto que se vendió más.

-Imprimir el dni, nombre de cada empleado junto con el nombre del último producto que se les añadió 
para vender.

-Imprimir la fecha de nacimiento del empleado más grande en edad y el más joven.
*/