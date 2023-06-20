#include<iostream>
// program for finding taylor series . 
using namespace std;
int taylor(int x , int n){
    static double f=1, p=1;
    double r; 
    if(n==0){
        return 1;
    }
    r =taylor(x,n-1);
    p= p*x;
    f= f*n;
    return r + p/f;
}
int main() {
    int x,m;
    cin >> x >> m;
    cout << taylor(x,m) <<endl;
}
