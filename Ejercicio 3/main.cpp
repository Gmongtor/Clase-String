#include <iostream>
#include <string>
using namespace std;
int main() {
    string nombre;
    cout << "Ingrese del alumno: ";
    cin >> nombre;
    string str1 = "Buenos dias, ";
    string str2 = "alumno ";
    string str3 = str1 + str2 + nombre;
    cout << "Cadena resultante: " << str3 << std::endl;
    return 0;
}
