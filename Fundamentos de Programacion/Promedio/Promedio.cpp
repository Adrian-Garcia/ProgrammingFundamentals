/*
Promedio con arreglo
Applicacion que pide el numero de materias que tienes y despues
pide tus calificaciones de materias. Finalmente imprime el 
promedio de todas las materias 
*/
#include <iostream>

using namespace std;

//Obtener numero de materias y notas de estas
void GetGrades (int iGrades[], int &iN) {
    //Preguntar numero de materias
    cout << "Inserta cuantas materias tienes: ";
    cin >> iN; //Ingresar materias
    
    if (iN > 0 && iN <= 10) {
        //Loop que pide la calificacion de cada materia
        for (int i=0; i<iN; i++) {
            cout << "Inserta la nota de la materia " << i+1 << ": ";
            cin >> iGrades[i]; //Inserta la nota [i]
        }
    }
}

//Calcular y Mostrar promedio obtenido
void Display (int iGrades[], int &iN) {
    
    //Validar que el numero de materias sea positivo y menor que 10
    if (iN > 0 && iN <= 10) {
        
        //Para guardar el valor del promedio (Igualamos a 0)
        double iProm = 0;
        
        //Loop que suma todas las notas de las materias
        for (int i=0; i<iN; i++) {
            iProm = iProm + iGrades[i];
        }
        //Imprimir el promedio
        cout << "Tu promedio es de: " << iProm/iN << endl;
    }
    
    else {
        cout << "Numero de materias no admitido " << endl;    
    }
}

int main()
{
    int iGrades[10]; //Arreglo de notas
    int iN; //Numero de materias
    
    GetGrades(iGrades, iN); //Obtener valores
    Display(iGrades, iN); //Calcular promedio
    
    //Terminar programa
    return 0;
}
