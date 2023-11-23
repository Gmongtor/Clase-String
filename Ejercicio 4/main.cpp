#include <iostream>
#include <string>
int main() {
    std::string sentence = "El lenguaje C++ es poderoso.";
    std::string sub_str = "C++";
    std::string replacement = "Python";

    std::cout << "Cadena original: " << sentence << std::endl;

    size_t pos = sentence.find(sub_str);

    if(pos != std::string::npos) {
        std::cout << "Subcadena '" << sub_str << "' encontrada en la posición: " << pos << std::endl;
        sentence.replace(pos, sub_str.length(), replacement);
        std::cout << "Cadena después del reemplazo: " << sentence << std::endl;
    } else {
        std::cout << "Subcadena '" << sub_str << "' no encontrada." << std::endl;
    }

    std::cout << "Longitud de la cadena: " << sentence.length() << std::endl;
    std::cout << "¿Está la cadena vacía? " << (sentence.empty() ? "Sí" : "No") << std::endl;

    return 0;
}

