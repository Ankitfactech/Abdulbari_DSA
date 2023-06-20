#include<iostream>
using namespace std;
// Code to find selection using combination approch .
int c(int n , int r) {
    if(n==r || r==0){
        return 1;
    }
    return c(n-1,r-1) +c(n-1,r) ;
}
int main() {
    int n, r;
    cin >> n >> r;
    cout << c(n,r) <<endl;

}