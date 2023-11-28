#include <iostream>
#include <string>
using namespace std;

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

};