#include <iostream>
using namespace std;

int mult(int m, int n) {
    int r=0, i;
    for (i=1; i<=n; i++)
        r += m;
    return r;
}


int multRecursao(int m, int n) {
    if (n == 0)
        return 0;

    return m + multRecursao(m, n-1);
}