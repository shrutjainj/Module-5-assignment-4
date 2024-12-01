#include<iostream>
using namespace std;
int main()
{
    int a[] = {2,4,8,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    int targ = 20;
    int i = 0, j, k;
    while(i<n-2)
    {
        j = i + 1;
        k = n-1;
        if(j<k)
        {
            if(a[i] + a[j] + a[k] == targ)
            {
                cout<<"Ya that"<<endl;
                break;
            }
            else if(a[i] + a[j] + a[k] < targ)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
        else
        {
            i++;
        }
    }
    cout<<"No that"<<endl;
    return 0;
}