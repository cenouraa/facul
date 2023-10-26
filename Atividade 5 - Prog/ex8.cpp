#include <iostream>
#include <string>

using namespace std;

void converterParaMaiusculas(string &texto);

int main() {
    string minhaString;

    getline(cin, minhaString);

    converterParaMaiusculas(minhaString);

    cout << minhaString << endl;

    return 0;
}

void converterParaMaiusculas(string &texto){
    for (char &c : texto) {
        if (c >= 'a' && c <= 'z') {
            c = c - ('a' - 'A');
        }
    }
}