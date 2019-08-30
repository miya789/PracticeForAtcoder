#include <iostream>
#include <limits>
#include <numeric>
#include <type_traits>
#include <stdio.h>
#define SWAP(a,b) ((a!=b) && )

void swap(unsigned &a, unsigned &b) {
    unsigned temp = a;
    a = b;
    b = temp;
}

// unsigned euclidean_gcd(unsigned a, unsigned b) {
//     while(1) {
//         if (a < b) swap(a, b);

//         if (!b) break;
//         a %= b;
//     }
//     return a;
// }

unsigned euclidean_gcd(unsigned a, unsigned b) {
    if (a < b) return euclidean_gcd(b, a);
    unsigned r;
    while((r = a%b)) {
        a = b;
        b = r;
    }
    return b;
}

int main() {
    printf("%d\n",euclidean_gcd(2,12));
    std::gcd(12,2);
}