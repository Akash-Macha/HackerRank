// https://www.hackerrank.com/challenges/30-bitwise-and/problem
/*
First thought : First I thought we can solve it by taking an vector and storing the A & B values in it, then calculating the max value
in the vector which is lessthan K value,
But it isn't that efficient, then I approched a single variable and few if else statements to make work done!
*/

#include <iostream>
using namespace std;
int calculate(int &N, int &K)
{
    int size  = ((N-1)*(N)) / 2 ;
    
//    for(int i=1;i<=N;i++)
//        V[i] = i;
//    vector<int>V(size);
//    int index = 0;
    int Ans = 0;
    bool initialized = false;
    for(int A = 1 ; A <= N-1 ; A++)
    {
        for(int B = A+1 ; B <= N ; B++)
        {
            int temp = A & B;
//			V[index] = A & B;
            if(!initialized &&  temp < K)  //V[index] < K)
            {
                Ans = temp ; //V[index];
                // temp = 
                initialized = true;
            }
			else if(temp > Ans && temp < K)
                Ans = temp;
        }
    }
    return Ans;
}
int main()
{
    int T;
    cin >> T;
    while(T-- != 0)
    {
        int N, K;
        cin >> N >> K;
        int ans = calculate(N, K);
        cout << ans << "\n";
    }
}
