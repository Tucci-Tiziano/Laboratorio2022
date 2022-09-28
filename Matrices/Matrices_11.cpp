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
    cout<<"dni del empleado"<<endl;
    cin>>dni;
    cout<<"cantidad de productos del empleado"<<endl;
    cin>>cant;
    vect.push_back(dni);
    for(int i=0; i<cant; i++){
    cout<<"codigo de producto "<<i+1<<endl;
    cin>>codigo;
    vect.push_back(codigo);
    }
    return vect;
}
void promedio_ganancia(data &d){
    int cont=0;
    int prom=0;
    producto aux;
    for(int i=0; i<d.productos.size()+1; i++){
        aux=d.productos[i];
        prom=(aux.precio_venta-aux.precio_costo)*aux.cant_vendida+prom;
        cont++;
    }
    prom=prom/cont;
    cout<<"promedio: "<<prom<<endl;
}
void producto_mas_vendido (data d){
    producto aux;
    int codigo=0;
    int cant=0;

    for(int i=0; i<d.productos.size(); i++){
        aux=d.productos[i];
        if(aux.cant_vendida>cant){
            codigo=aux.codigo;
            cant=aux.cant_vendida;
        }
    }
    cout<<"codigo del producto mas vendido"<<codigo<<endl;
}
void empleado_mas_antiguo(data d)
{
    empleado aux;
    string fecha_ingreso;
    string nombre;
    int fecha_ingreso2;
    int mas_antiguo2=0;
    int auxiliar;
    for(int i=0; i<d.empleados.size(); i++){
        aux=d.empleados[i];
       fecha_ingreso=aux.fecha_ingreso;
       fecha_ingreso2=stoi(fecha_ingreso);
        if(mas_antiguo2<fecha_ingreso2){
            mas_antiguo2=fecha_ingreso2;
            nombre=aux.nombre;
        }
    }
    cout<<"nombre del mas antiguo: "<<nombre<<endl;
    auxiliar=mas_antiguo2/100;
    auxiliar=auxiliar*100;
    auxiliar=mas_antiguo2-auxiliar;
    cout<<"fecha de ingreso del mas veterano: "<<auxiliar<<"/";
    auxiliar=mas_antiguo2/10000;
    auxiliar=auxiliar*10000;
    auxiliar=mas_antiguo2-auxiliar;
    auxiliar=auxiliar/100;
    cout<<auxiliar<<"/";
    auxiliar=mas_antiguo2/10000;
    cout<<auxiliar<<endl;
}
void empleado_mas_viejo(data d)
{
    empleado aux;
    string fecha_nacimiento;
    int fecha_nacimiento2;
    int mas_viejo2=0;
    int auxiliar;
    for(int i=0; i<d.empleados.size(); i++){
        aux=d.empleados[i];
        fecha_nacimiento=aux.fecha_nacimiento;
        fecha_nacimiento2=stoi(fecha_nacimiento);
        if(mas_viejo2<fecha_nacimiento2){
            mas_viejo2=fecha_nacimiento2;
        }
    }
    auxiliar=mas_viejo2/100;
    auxiliar=auxiliar*100;
    auxiliar=mas_viejo2-auxiliar;
    cout<<"fecha de nacimiento del mas viejo: "<<auxiliar<<"/";
    auxiliar=mas_viejo2/10000;
    auxiliar=auxiliar*10000;
    auxiliar=mas_viejo2-auxiliar;
    auxiliar=auxiliar/100;
    cout<<auxiliar<<"/";
    auxiliar=mas_viejo2/10000;
    cout<<auxiliar<<endl;
}
void empleado_mas_joven (data d){
    empleado aux;
    string fecha_nacimiento;
    int fecha_nacimiento2;
    int mas_joven2=99999999;
    int auxiliar;
    for(int i=0; i<d.empleados.size(); i++){
        aux=d.empleados[i];
        fecha_nacimiento=aux.fecha_nacimiento;
        fecha_nacimiento2=stoi(fecha_nacimiento);
        if(mas_joven2>fecha_nacimiento2){
            mas_joven2=fecha_nacimiento2;
        }
    }
    auxiliar=mas_joven2/100;
    auxiliar=auxiliar*100;
    auxiliar=mas_joven2-auxiliar;
    cout<<"fecha de nacimiento del mas joven: "<<auxiliar<<"/";
    auxiliar=mas_joven2/10000;
    auxiliar=auxiliar*10000;
    auxiliar=mas_joven2-auxiliar;
    auxiliar=auxiliar/100;
    cout<<auxiliar<<"/";
    auxiliar=mas_joven2/10000;
    cout<<auxiliar<<endl;
}

void modificar_producto(data &d){
    bool seguir=true;
    int codigo;
    producto aux;
    cout<<"que producto quiere modificar"<<endl;
    cout<<"codigo del producto"<<endl;
    cin>>codigo;
    for(int i=0;i<d.productos.size() && seguir; i++){
        aux=d.productos[i];
        if(aux.codigo=codigo){
            cout<<"cantidad vendida"<<aux.cant_vendida<<endl;
            cout<<"precio costo"<<aux.precio_costo<<endl;
            cout<<"precio venta"<<aux.precio_venta<<endl<<endl;
            cout<<"nueva cantidad vendida"<<endl;
            cin>>aux.cant_vendida;
            cout<<"nuevo precio de costo"<<endl;
            cin>>aux.precio_costo;
            cout<<"nueva precio de venta"<<endl;
            cin>>aux.precio_venta;
            d.productos[i]=aux;
            seguir=false;
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
void agregar_producto(data &d, vector<vector<int>> &matriz){
    vector<int> vect_aux;
    int codigo;
    int dni;
    bool error=true;
    bool agr=false;
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
            if(aux.codigo==codigo){
                error=true;
            }
        }
        if(error){
            cout<<"codigo de producto ya existente volver a intentar"<<endl;
        }
    }
    d.productos.push_back(aux);  
    cout<<"a quien le quieres asignar este producto"<<endl; 
    cin>>dni;     
    for(int i=0; i<matriz.size(); i++){
        if(matriz[i][0]==dni){
            vect_aux=matriz[i];
            vect_aux.push_back(codigo);
            matriz[i]=vect_aux;
            agr=true;
        }
    }
    if(!agr){
        cout<<"empleado no encontrado"<<endl;
    }
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
    cout<<"dni del empleado"<<endl;
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
        cout<<"fecha de nacimiento, introducirla como el siguiente ejemplo: el cinco de enero de dosmil diez = 20100105"<<endl;
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

void alta_producto(data &d, vector<vector<int>>&matriz){
    int eleccion;
    cout<<"1- modificar producto"<<endl;
    cout<<"2- eliminar producto"<<endl;
    cout<<"3- agregar producto"<<endl;
    cout<<"4- atras"<<endl;
    cin>>eleccion;
    switch (eleccion)
    {
    case 1:
        modificar_producto(d);
    break;
    case 2:
        eliminar_producto(d);
    break;
    case 3:
        agregar_producto(d, matriz);
    break;
    case 4:
        1+1;
    break;
    }
}
void alta_empleado(data &d){
    int eleccion;
    cout<<"1- modificar empleado"<<endl;
    cout<<"2- eliminar empleado"<<endl;
    cout<<"3- agregar empleado"<<endl;
    cout<<"4- atras"<<endl;
    cin>>eleccion;
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
    case 4:
        1+1;
    break;
    }
}


int main()
{
    bool continuar=true;
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

    while(continuar){
        cout<<"eleccion"<<endl;
        cout<<"1- alta empleado"<<endl;
        cout<<"2- alta producto"<<endl;
        cout<<"3- promedio ganancia"<<endl;
        cout<<"4- producto mas vendido"<<endl;
        cout<<"5- empleado mas antiguo en la empresa"<<endl;
        cout<<"6- empleado mas joven"<<endl;
        cout<<"7- empleado mas viejo"<<endl;
        cout<<"8- salir"<<endl;
        cin>>eleccion;
        switch (eleccion)
        {
        case 1:
            alta_empleado(d);
        break;
        case 2:
            alta_producto(d, matriz);
        break;
        case 3:
            promedio_ganancia(d);//no funciona
        break;
        case 4:
            producto_mas_vendido(d);
        break;
        case 5:
            empleado_mas_antiguo(d);//antiguo se refiere a timepo en la empresa
        break;
        case 6:
            empleado_mas_joven(d);
        break;
        case 7:
            empleado_mas_viejo(d);
        break;
        case 8:
            continuar=false;
        break;
        }
    }
    cout<<"▒▒▒▒▒chau▒▒▒▒▒"<<endl;
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
-Dar de alta nuevos producto, eliminar y modificarlos. //////////////
(Al darlos de alta habrá que asignárselos a un vendedor)

-Dar de alta nuevos empleados, eliminar y modificarlos.///////////

-Calcular la ganancia promedio de los productos que se venden.

-Nombre del empleado con mayor antigüedad en el trabajo junto con la fecha en que inició.//

-Código del producto que se vendió más.////

-Imprimir el dni, nombre de cada empleado junto con el nombre del último producto que se les añadió 
para vender.

-Imprimir la fecha de nacimiento del empleado más grande en edad y el más joven. ///////
*/