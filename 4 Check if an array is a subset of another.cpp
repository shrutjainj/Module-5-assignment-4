#include<iostream>
using namespace std;
int main()
{
    int arr1[] = {1,2,4540,6778,8998,9877};
    int arr2[] = {2, 4};
    int counts = 0;
    int a = sizeof(arr1) / sizeof(arr1[0]);
    int b = sizeof(arr2) / sizeof(arr2[0]);
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<a; j++)
        {
            if(arr2[b] == arr1[a])
            {
                counts++;
            }
        }
    }
    if(counts != b)
    {
        cout<<"it is not a universal";
    }
    else
    {
        cout<<"it is a best universal";
    }
    cout<<" "<<endl;
    return 0;
}