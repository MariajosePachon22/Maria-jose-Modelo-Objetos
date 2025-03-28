#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<vector<float>> vertices;
vector<vector<int>> caras;

while (true) {
cout << "MENÚ" << endl;
cout << "1. Ingresar vértice" << endl;
cout << "2. Ingresar cara" << endl;
cout << "3. Imprimir figura" << endl;
cout << "4. Salir" << endl;

int opcion;
cout << "Seleccione una opción: ";
cin >> opcion;

if (opcion == 1) {
float x, y, z;
cout << "Ingrese la coordenada x del vértice: ";
cin >> x;
cout << "Ingrese la coordenada y del vértice: ";
cin >> y;
cout << "Ingrese la coordenada z del vértice: ";
cin >> z;
vertices.push_back({x, y, z});
}
else if (opcion == 2) {
if (vertices.empty()) {
cout << "!1Debe ingresar al menos un vértice!" << endl;
} else {
vector<int> cara;
int cantidad;
cout << "¿fCúantos vértices tiene esta cara? ";
cin >> cantidad;
for (int i = 0; i < cantidad; i++) {
int indice;
cout << "Ingrese el índice del vértice " << i+1 << ": ";
cin >> indice;
if (indice < vertices.size()) {
cara.push_back(indice);
} else {
cout << "índice no válido." << endl;
break;
}
}
if (cara.size() == cantidad) {
caras.push_back(cara);
}
}
}
else if (opcion == 3) {
cout << "Vértices:" << endl;
for (size_t i = 0; i < vertices.size(); i++) {
cout << "Vértice " << i << ": (" << vertices[i][0] << ", " << vertices[i][1] << ", " << vertices[i][2] << ")" << endl;
}

cout << "Caras:" << endl;
for (size_t i = 0; i < caras.size(); i++) {
cout << "Cara " << i << ": ";
for (size_t j = 0; j < caras[i].size(); j++) {
cout << caras[i][j] << " ";
}
cout << endl;
}
}
else if (opcion == 4) {
cout << "!FIN!" << endl;
break;
}
else {
cout << "Opción no válida. Intente de nuevo." << endl;
}
}

return 0;
}