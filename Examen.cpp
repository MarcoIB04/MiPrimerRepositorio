#include <iostream>
#include <string>
//#include "Examen.h"
using namespace std;
//Creacion de la clase que de forma local podria eliminarse siempre que se quite el comentario de la linea 3.
class Student{
  private:
    string name;
    string matricula;
    double grade;
    string type;

  public:
    void setName (string n){
      name = n;
    }
    void setMatricula (string m){
      matricula = m;
    }
    void setGrade(double g){
      grade = g;
    }
    void setType(string t){
      type = t;
    }

    string getName (){
      return name;
    }
    string getMatricula(){
      return matricula;
    }
    double getGrade (){
      return grade;
    }
    string getType (){
      return type;
    }
//Fin de las clases
};
int main() {
  //Variables necesarias para el programa
  Student student1;
  string n;
  string m;
  double g;
  string t;
  double a;
  int o;
  
  //Iniciamos el programa pidiendo los datos del primer alumno 
  cout << "======================================== \n";
  cout << "Bienvenido al gestor de alumnos \n";
  cout << "======================================== \n";
  //Nombre
  cout << "Ingresa el nombre del alumno \n";
  cin >> n;
  student1.setName(n);
  //Matricula
  cout << "Ingresa la matricula del alumno \n";
  cin >> m;
  student1.setMatricula(m);
  //Calificaciones
  g = 0;
  for (int i = 1; i <= 3; i++){
    cout << "Ingresa la calificacion " << i << " del alumno \n";
    cin >> a;
    g = g + a;
  }
  g = g/3;
  student1.setGrade(g);
  //Tipo de alumno
  if (g >= 95){
    t = "Tipo A+";
  } else if(g >= 90){
    t = "Tipo A-";
  } else if (g >= 80){
    t = "Tipo B";
  } else if (g >= 70){
    t = "Tipo C";
  } else {
    t = "Tipo D";
  }
  student1.setType(t);
  
  do {
    cout << "======================================== \n";
    cout << "Elige una accion \n";
    cout << "======================================== \n";
    cout << "1. Consultar datos del alumno \n";
    cout << "2. Agregar otro alumno \n"; 
    cout << "3. Salir \n";
    cin >> o;

    switch (o){
      case 1: {
        cout << "======================================== \n";
        cout << "Elegiste consultar los datos del alumno \n";
        cout << "======================================== \n";
        cout << "Nombre: " << student1.getName() << "\n";
        cout << "Matricula: " << student1.getMatricula() << "\n";
        cout << "Promedio: " << student1.getGrade() << "\n";
        cout << "Clasificacion: " << student1.getType() << "\n";
        break;
      }
      case 2: {
        //Nombre
        cout << "Ingresa el nombre del alumno \n";
        cin >> n;
        student1.setName(n);
        //Matricula
        cout << "Ingresa la matricula del alumno \n";
        cin >> m;
        student1.setMatricula(m);
        //Calificaciones
        g = 0;
        for (int i = 1; i <= 3; i++){
          cout << "Ingresa la calificacion " << i << " del alumno \n";
          cin >> a;
          g = g + a;
        }
        g = g/3;
        student1.setGrade(g);
        //Tipo de alumno
        if (g >= 95){
          t = "Tipo A+";
        } else if(g >= 90){
          t = "Tipo A-";
        } else if (g >= 80){
          t = "Tipo B";
        } else if (g >= 70){
          t = "Tipo C";
        } else {
          t = "Tipo D";
        }
        student1.setType(t);
        break;
      }
    }
  } while (o != 3);
}
