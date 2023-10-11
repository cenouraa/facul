#include <iostream>
#include <cmath>

void potencia(){
    int base=0, exp=0, total=1;

    std::cin >> base >> exp;

    for(exp; exp>0; exp--){
        total *= base;
    }

    std::cout << total << std::endl;
}

void fatorial(){
    int num=0, fat=1;

    std::cin >> num;

    for(num; num>0; num--){
        fat *= num;
    }

    std::cout << fat << std::endl;
}

void volumeEsfera(){
    double raio=0, volume=0;
    float pi=0;

    pi = M_PI;

    std::cin >> raio;

    volume = 4 * pi * (raio*raio*raio) / 3;

    std::cout << volume << std::endl;
}

void sequencia(){
    int num1=0, num2=0, soma=0;

    std::cin >> num1 >> num2;

    if(num1 < num2){
        for(num1; num1 <= num2; num1++)
            soma += num1;
    }
    else{
        for(num2; num2 <= num1; num2++)
            soma += num2;
    }

    std::cout << soma << std::endl;
}

void parImpar(){
    int num=0;

    std::cin >> num;

    if(num % 2 == 0){
        std::cout << "Par" << std::endl;
    }
    else{
        std::cout << "Impar" << std::endl;
    }
}

void multiplo(){
    int num=0;

    std::cin >> num;

    if(num % 4 == 0){
        std::cout << "Multiplo de 4" << std::endl;
    }
    else{
        std::cout << "Nao multiplo de 4" << std::endl;
    }

}

int main(){
    multiplo();
    
    parImpar();

    sequencia();

    volumeEsfera();

    fatorial();

    potencia();

    return 0;
}