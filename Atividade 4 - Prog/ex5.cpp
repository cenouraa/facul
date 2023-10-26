#include <iostream>
using namespace std;

void inverterPalavra(string *palavra);

int main(){
    string palavra;

    getline(cin, palavra);

    inverterPalavra(&palavra);

    return 0;
}

void inverterPalavra(string *palavra){
    string invertido;
    int n = (*palavra).length();
    invertido.clear();

    while(n >= 0){
        invertido += (*palavra)[n];
        n--;
    }
    *palavra = invertido;


}