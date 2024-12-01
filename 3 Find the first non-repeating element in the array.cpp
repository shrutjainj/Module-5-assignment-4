#include<iostream>
using namespace std;
int main()
{
    int array[] = {12,31,532,76,87,8,8,2};
    int n = sizeof(array) / sizeof(array[0]);
    for(int i=0; i<n; i++)
    {
        if(array[i] != array[i+1])
        {
            cout<<i<<" ";
            break;
        }
    }
    return 0;
}