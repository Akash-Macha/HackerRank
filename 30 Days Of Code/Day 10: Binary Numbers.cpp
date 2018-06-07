// https://www.hackerrank.com/challenges/30-binary-numbers/problem

#include <stack>
#include <string>
#include <iostream>
using namespace std;

int max( int a ,int b)
{
    return (a > b ? a : b);
}
int main(){
    int n;
    cin >> n;
    if(n<0 || n>1000000)
        return 0;

        stack<int> myS;
        int i = 0;
        while(n > 0)
        {
            int value= n%2;
            myS.push(value);
            n /= 2;
        }
        
        int counter = 0;
        int result = 0;
        while(myS.empty() != 1)
        {
            if(myS.top() == 0)
                counter = 0;
            else{
                counter++;
                result = max(counter,result);
            }
            myS.pop();
        }
        cout << result;
    return 0;
}
