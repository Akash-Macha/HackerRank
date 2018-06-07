// https://www.hackerrank.com/challenges/30-loops/problem

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n<2 || n>20)
           return 0;
    for(int i =1 ; i<=10 ; i++)
          cout << n << " x " << i << " = " << (n*i) << endl;
    return 0;
}
