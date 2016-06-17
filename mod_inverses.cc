
#include <cstdio>
#include <cassert>
#include <iostream>

using namespace std;

const int P = 11; // To adjust (must be prime).
long long r[P];

long long power(long long x, long long y) {
    if(y == 0)
        return 1;

    long long ans = power(x, y / 2);
    ans = (ans * ans) % P;
    if(y % 2 == 1)
        ans = (ans * x) % P;

    return ans;
}

int main( void ) {
    r[1] = 1;
    for(int i = 2; i < P; i++)
        r[i] = ((P - (P / i)) * r[P % i]) % P;

    // Check
    for(int i = 1; i < P; i++)
        assert(power(i, P - 2) == r[i]);

    return 0;
}
