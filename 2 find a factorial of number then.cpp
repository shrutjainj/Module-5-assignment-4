#include<iostream>
using namespace std;
int main()
{
    long long int a = 20;
    long long int f = 1;
    for(int i=1; i<=a; i++)
    {
        f *= i;
    }
    cout<<f;
}