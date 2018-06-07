// https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n<0 || n > 100000)
        return 0;
    map<string,long int> myMap;
    for(int i = 0 ;i <n ;i++)
    {
        string name;
        long int phone;
        cin >> name >> phone;
        myMap.insert(pair<string,long int>(name,phone));
    }
    string temp;
    while(cin >> temp)
	{
        map<string,long int> :: iterator it = myMap.find(temp);
        if(myMap.count(temp) == 0){
            cout << "Not found" << endl;
        }	
        else	cout << temp << "=" <<  it->second << endl;
    }
    return 0;
}

