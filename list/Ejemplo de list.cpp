#include <iostream>
#include <list>
#include <string>

using namespace std;

// Clase Estudiante
class Estudiante {
private:
    int codigo;
    string nombre;
    int edad;

public:
    // Constructor
    Estudiante(int c, string n, int e) {
        //inicializar los atributos
        codigo = c;
        nombre = n;
        edad = e;
    }

    // Método para mostrar los datos
    void mostrar() const {
        cout << "Codigo: " << codigo
            << " | Nombre: " << nombre
            << " | Edad: " << edad << endl;
    }
};

int main() {

    // Crear una lista de objetos Estudiante
    list<Estudiante> estudiantes;

    // 1. push_back()
    // Registrar estudiantes al final
    estudiantes.push_back(Estudiante(101, "Elmer", 20));
    estudiantes.push_back(Estudiante(102, "Carlos", 21));

    // 2. push_front()
    // Registrar un estudiante al inicio
    estudiantes.push_front(Estudiante(100, "Ana", 19));

    cout << "=== LISTA DE ESTUDIANTES ===" << endl;

    for (const Estudiante& estudiante : estudiantes) {
        estudiante.mostrar();
    }

    // 3. pop_front()
    // Eliminar el primer estudiante
    estudiantes.pop_front();

    cout << "\n=== DESPUES DE ELIMINAR EL PRIMERO ===" << endl;

    for (const Estudiante& estudiante : estudiantes) {
        estudiante.mostrar();
    }

    // 4. pop_back()
    // Eliminar el ultimo estudiante
    estudiantes.pop_back();

    cout << "\n=== DESPUES DE ELIMINAR EL ULTIMO ===" << endl;

    for (const Estudiante& estudiante : estudiantes) {
        estudiante.mostrar();
    }

    // 5. insert()
    // Insertar un estudiante en una posicion
    auto posicion = estudiantes.begin();
    estudiantes.insert(posicion,
        Estudiante(103, "Lucia", 22));

    cout << "\n=== DESPUES DE INSERTAR ===" << endl;

    for (const Estudiante& estudiante : estudiantes) {
        estudiante.mostrar();
    }

    return 0;
}