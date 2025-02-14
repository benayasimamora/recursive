#include <iostream>
using namespace std;

int sumItSelf (int n){
    if (n == 1) return 1;
    return n + sumItSelf(n-1);
}

int main (){
    int n;
    cin >> n;
    cout << sumItSelf(n);
    return 0;
}