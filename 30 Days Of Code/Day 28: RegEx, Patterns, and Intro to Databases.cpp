/*
##  Code has errors!
##  Unable complete this problem, i will try it later.
/*
#include<bits/stdc++.h>

using namespace std;
bool operate(string  emailId)
{
    int index = emailId.find('@');
    //if(in)
    string toCompare = "@gmail.com";
    int toCompare_i = 0;
    bool check = false;
    
    while(emailId[index] != '\n')
    {
            if(emailId[index] == toCompare[toCompare_i++]){
                ++index;
                continue;
            }
            else{
                check = true;
                break;
            }
    }
    if(check){
        return false;
    }
    return true;
}
void printStrings(vector<string> V,int size)
{
    string t;
    for (int i = 1; i < size; i++) 
    {
      for (int j = 1; j < size; j++) 
      {
         if (strcmp(V[j - 1], V[j]) > 0) 
         {
            strcpy(t, V[j - 1]);
            strcpy(V[j - 1], V[j]);
            strcpy(V[j], t);
         }
      }
   }
    for(int i=0;i<size;i++)
        cout << V[i] << "\n";
}
int main(){
    int N;
    cin >> N;
    vector<string>V(N);
    int V_i = 0;
    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        bool check = operate(emailID);
        if(check) 
            V[V_i++] = firstName;
    }
    printStrings(V,V_i);
    return 0;
}
