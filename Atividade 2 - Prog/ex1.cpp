#include <iostream>
using namespace std;

int somaInt(int num);

int main(){
    int num=0;

    cin>>num;

    cout << somaInt(num);

    return 0;
}

int somaInt(int num){
    int soma=0;
    
    for(int i=0; i<=num; i++){
        soma += i;
    }
    return soma;

}