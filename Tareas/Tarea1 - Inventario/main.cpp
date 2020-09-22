#include <iostream>
#include <string>

using namespace std;

string productos[5][4] = {
    { "001", "iPhone X", "0", "20000.00", },
    { "002", "Laptop Dell", "5", "10000.00" },
    { "003", "Monitor Samsung", "2", "2000.00" },
    { "004", "Mouse", "100", "300.00" },
    { "005", "HeadSet", "25", "500.00" }
};

void listarProductos() {
    system("cls");
    cout << endl;
    cout << "Listado de Productos" << endl;
    cout << "********************" << endl;
    cout << "Codigo | Descripcion | Existencia | Precio" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << productos[i][0] << " | " << productos[i][1] << " | " << productos[i][2] << " | " << productos[i][3] << endl;
    }
}

void movimientoInventario(string codigo, int cantidad, string tipoMovimiento) {
    for (int i = 0; i < 5; i++)
    {
        if (productos[i][0] == codigo) {
            if (tipoMovimiento == "+") {
                productos[i][2] = to_string(stoi(productos[i][2]) + cantidad);
            } else {
                productos[i][2] = to_string(stoi(productos[i][2]) - cantidad);
            }
        }
    }
}

void ingresoDeInventario() {
    string codigo = "";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << "Ingreso de Productos al Inventario" << endl;
    cout << "**********************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    movimientoInventario(codigo, cantidad, "+");
}

void salidaDeInventario() {
    string codigo = "";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << "Salida de Productos del Inventario" << endl;
    cout << "**********************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    movimientoInventario(codigo, cantidad, "-");
}

void movimientoPrecio(string codigo, double precio, string tipoMovimiento) {
    for (int i = 0; i < 5; i++)
    {
        if (productos[i][0] == codigo) {
            if (tipoMovimiento == "+") {
                productos[i][3] = to_string(stoi(productos[i][3]) + precio);
            } else {
                productos[i][3] = to_string(stoi(productos[i][3]) - precio);
            }
        }
    }
}

void aumentoDePrecio() {
    string codigo = "";
    double precio = 0;

    system("cls");
    cout << endl;
    cout << "Aumento en el precio del Producto" << endl;
    cout << "**********************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese cuanto ha subido el precio del producto: ";
    cin >> precio;
    cout << endl;

    movimientoPrecio(codigo, precio, "+");
}

void disminucionDePrecio() {
    string codigo = "";
    double precio = 0;

    system("cls");
    cout << endl;
    cout << "Descenso en el precio del Producto " << endl;
    cout << "**********************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese cuanto ha bajado el precio del producto: ";
    cin >> precio;
    cout << endl;

    movimientoPrecio(codigo, precio, "-");
}

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while(true) {
        system("cls");

        cout << "Sistema de Inventario"; 
        cout << endl;
        cout << "*********************";
        cout << endl;
        cout << endl;
        cout << "1 - Productos" << endl;
        cout << "2 - Ingreso de Inventario" << endl;
        cout << "3 - Salida de Inventario" << endl;
        cout << "4 - Aumento en el Precio del Producto" << endl;
        cout << "5 - Descenso en el Precio del Producto" << endl;
        cout << "0 - Salir" << endl;
        cout << "Ingrese una opcion del menu: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1: 
            listarProductos();            
            break;
        case 2:
            ingresoDeInventario();
            break;
        case 3:
            salidaDeInventario();
            break;
        case 4:
            aumentoDePrecio();
            break;
        case 5:
            disminucionDePrecio();
            break;
        
        default:
            break;
        }

        system("pause");
        cout << endl;

        if (opcion == 0) {
            break;
        }
    }

 

    return 0;
}
