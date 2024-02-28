#include <iostream>
#include <cmath>

using namespace std;

struct Ponto {
    double x;
    double y;
};

double calcularDistancia(Ponto ponto1, Ponto ponto2) {
    double distancia = sqrt(pow(ponto2.x - ponto1.x, 2) + pow(ponto2.y - ponto1.y, 2));
    return distancia;
}

int main() {
    Ponto ponto1 = {0, 0};
    Ponto ponto2 = {3, 4};
    cout << calcularDistancia(ponto1, ponto2) << endl;

    ponto1 = {-2, -1};
    ponto2 = {1, 2};
    cout << calcularDistancia(ponto1, ponto2) << endl;

    ponto1 = {5, 3};
    ponto2 = {5, 3};
    cout << calcularDistancia(ponto1, ponto2) << endl;

    return 0;
}