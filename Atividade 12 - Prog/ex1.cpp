#include <iostream>
using namespace std;

int fatorial(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    else{
        return num*fatorial(num-1);
    }
}

int main(){
    int num, rst=0;

    cin >> num;

    if(num == 0 || num == 1){
        cout << "1";
    }
    else{
        rst = fatorial(num);
        cout << rst;
    }

    return 0;
}
