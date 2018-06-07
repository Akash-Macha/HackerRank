// https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem

#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string S;
    cin >> S;
    try{
        int num = stoi(S);
        cout << num;
    }catch(exception e){
        cout << "Bad String";
    }
    return 0;
}
