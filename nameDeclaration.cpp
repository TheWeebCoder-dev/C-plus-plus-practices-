#include <iostream>
#include <string>
using namespace std;

string addPerson(string Name,string lastName){
   return Name + " " + lastName;
}

int main(){
    string nombre;
    string apellido;

cout << "Please register yourself" <<endl;
cin >> nombre;
cout << "Please enter your last name" <<endl;
cin >> apellido;
cout << "Registation finished" <<endl;
cout <<"Welcome! " << addPerson(nombre,apellido) <<endl;

return 0;
}