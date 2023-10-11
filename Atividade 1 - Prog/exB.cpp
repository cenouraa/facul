#include <iostream>
#include <cmath>

int potencia(int num, int exp){
    int total=1;

    for(exp; exp>0; exp--){
        total *= num;
    }

    return total;
}

int fatorial(int num){
    int fat=1;

    for(num; num>0; num--){
        fat *= num;
    }

    return fat;
}

float volumeEsfera(float raio){
    float pi=0, volume=0;

    pi = M_PI;

    volume = 4 * pi * (raio*raio*raio) / 3;

    return volume;
}

int sequencia(int num1, int num2){
    int soma=0;
    
    if(num1 < num2){
        for(num1; num1 <= num2; num1++)
            soma += num1;
            return soma;
    }
    else{
        for(num2; num2 <= num1; num2++)
            soma += num2;
            return soma;
    }

    std::cout << soma << std::endl;
}

int parImpar(int num){
    if(num % 2 == 0){
        std::cout << "Par" << std::endl;
        return 0;
    }
    else{
        std::cout << "Impar" << std::endl;
        return 0;
    }
}

int multiplo(int num){
    if(num % 4 == 0){
        std::cout << "Multiplo de 4" << std::endl;
        return 0;
    }
    else{
        std::cout << "Nao multiplo de 4" << std::endl;
        return 0;
    }

}

int main(){
    int num=0, num1=0, num2=0, exp=0;
    float raio=0;

    std::cin >> num;
    multiplo(num);

    parImpar(num);

    std::cin >> num1 >> num2;
    std::cout << sequencia(num1, num2) << std::endl;;

    std::cin >> raio;
    std::cout << volumeEsfera(raio) << std::endl;

    std::cout << fatorial(num) << std::endl;

    std::cin >> exp;
    std::cout << potencia(num, exp) << std::endl;

    return 0;
}