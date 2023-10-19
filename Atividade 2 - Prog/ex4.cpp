#include <iostream>
#include <string>

using namespace std;

bool validation(string senha);

int main(){
    string senha;

    getline(cin, senha);

    if(validation(senha)){
        cout << "senha valida" << endl;
    }
    else{
        cout << "senha invalida" << endl;
    }

    return 0;
}

bool validation(string senha){
    bool maiusculo = false, minusculo = false, numero = false;
    char vld = {0};
    
    if(senha.length() < 8)
        return false;
    

    for(int i=0; i < senha.length(); i++){
        vld = senha[i];

        if(vld >= 'A' && vld <= 'Z')
            maiusculo = true;
        
        else if(vld >= 'a' && vld <= 'z')
            minusculo = true;
        
        else if(vld >= '0' && vld <= '9')
            numero = true;
        

        if(maiusculo && minusculo && numero)
            return true;
        

    }

    return false;

    

}