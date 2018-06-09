// https://www.hackerrank.com/challenges/30-more-exceptions/problem

/*
Resources : http://www.cplusplus.com/doc/tutorial/exceptions/
Thoughts :  Just saw the tutorial tab and understood the example of
            Exceptions in java (by practicing it again, even though I already know it) .
            Then, just searched the same version in C++ and implemented the solution.
*/

#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
// ------------Code----------
class myException : public exception{
    virtual const char* what() const throw()
    {
        return "n and p should be non-negative";
    }
} myExp;
class Calculator
{
    public:
        int power(int number1, int number2)
        {
                if(number1 < 0 || number2 < 0)
                    throw myExp;
                return pow(number1,number2);
        }
};
// ------------------------------------
int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}
