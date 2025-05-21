#include <iostream>
using namespace std;

int fib2(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    int prev2 = 0, prev = 1, sum = 0;
    for (int i = 3; i <= n; i++) {
        sum = prev + prev2;
        prev2 = prev;
        prev = sum;
    }
    return sum;
}
int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}

int main() {
    int n = fib(10);
    cout << n;  
    return 0;
}
