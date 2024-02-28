#include <iostream>
#include <string>

using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

bool dataAnterior(const Data& data1, const Data& data2){
    if(data1.ano < data2.ano)
        return true;
    else if(data1.ano > data2.ano)
        return false;
    else{
        if(data1.mes < data2.mes)
            return true;
        else if(data1.mes > data2.mes)
            return false;
        else{
            if(data1.dia < data2.dia)
                return true;
            else
                return false;
        }
    }
}

int main(){
    Data primeiraData, segundaData;

    cin >> primeiraData.dia >> primeiraData.mes >> primeiraData.ano;

    cin >> segundaData.dia >> segundaData.mes >> segundaData.ano;

    if(dataAnterior(primeiraData, segundaData))
        cout << "a primeira data e anterior a segunda" << endl;
    else
        cout << "a segunda e anterior a primeira" << endl;

    return 0;
}