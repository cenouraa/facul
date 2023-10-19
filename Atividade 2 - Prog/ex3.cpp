#include <iostream>
using namespace std;

void binario(int num);

int main(){
    int num=0;

    cin >> num;

    binario(num);

    return 0;
}

void binario(int num){
    if(num == 0){
        cout << "0" << endl;
    }
    else{
        int binario[32]={0}, i=0;

        while(num > 0){
            binario[i] = num % 2;
            num /= 2;
            i++;
        }

        for(int j = i-1; j >= 0; j--){
            cout << binario[j] << " ";
        }
    }

}