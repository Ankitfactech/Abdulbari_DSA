#include<iostream>
using namespace std;
int power(int m, int n){
    if(n==0){
        return 1;
    }
    return m*power(m,n-1);
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << " Power of m^n is:" << power(m,n) <<endl;

    return 0;
}