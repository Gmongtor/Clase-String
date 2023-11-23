#include <iostream>
#include <string>
using namespace std;
int main() {
    string sentence = "OpenAI is a leading AI research lab.";
    cout << "Tamaño de la cadena: " << sentence.size() << endl;
    cout << "¿Está la cadena vacía? " << (sentence.empty() ? "Sí" : "No") <<endl;
    cout << "Carácter en la posición 5: " << sentence.at(5) << endl;
    sentence.replace(sentence.find("OpenAI"), 6, "AI Hub");
    std::cout << "Cadena después del reemplazo: " << sentence << std::endl;
    size_t found = sentence.find("AI");
    if (found != string::npos)
        cout << "Subcadena 'AI' encontrada en la posición: " << found << endl;
    return 0;
}