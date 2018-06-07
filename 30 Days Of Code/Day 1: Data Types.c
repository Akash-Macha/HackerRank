// https://www.hackerrank.com/challenges/30-data-types/problem

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
//-----------Code-----------
    int i2;
    double d2;
    scanf("%d",&i2);
    scanf("%lf",&d2);
    printf("%d\n",i+i2);
    printf("%.1lf\n",d+d2);
    char s2[50];

    scanf(" %[^\n]s", s2);
    printf("%s",s);
    printf("%s",s2);
// -------------------------
    return 0;
}
