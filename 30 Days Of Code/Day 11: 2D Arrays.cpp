// https://www.hackerrank.com/challenges/30-2d-arrays/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector< vector<int> > arr(6,vector<int>(6));
    
    for(int arr_i = 0;arr_i < 6;arr_i++)
    {
       for(int arr_j = 0;arr_j < 6;arr_j++)
       {
          cin >> arr[arr_i][arr_j];
          if(arr[arr_i][arr_j] < -9 || arr[arr_i][arr_j] > 9)
              return 0;
       }
    }
    
    int max = 0;
    int sum = 0;
    int temp = 1;
    for(int i=0 ; i<=3 ; i++)
    {
        for(int j=0 ; j <= 3 ; j++)
        {
        	sum = 0;
            sum += ( arr[i][j] + arr[i][j+1] + arr[i][j+2] );
			sum += ( arr[i+1][j+1] );
			sum += ( arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2] );
            if(temp == 1)
            {
                max = sum;
                temp++;
            }else{
            	if(max < sum){
            		max = sum;
				}
			}
        }
    }
    cout << max << endl;
    
    return 0;
}

