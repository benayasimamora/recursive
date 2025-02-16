#include <iostream>
using namespace std;

long long factorial (int n){
    if (n == 0) return 1;
    if (n == 1) return 1;
    return n * factorial(n-1);
}

long long countingZero (long long num){
    int count = 0;
    while (num % 10 == 0){
        count++;
        num = num /10;
    }
    return count;
}


int main (){
    int n;
    long long factorials;
    
    cin >> n;

    factorials =  factorial(n);
    cout << factorials << endl;
    cout << countingZero(factorials);
    return 0;
}