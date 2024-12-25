/* Given an array with n elements.
   Every element is repeated twice except
   one element. Find that element
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter elements into array : \n";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int ans=0;
    for(int i=0; i<n; i++)
        ans= ans^arr[i];

    cout<<"The single element is : "<<ans;
    return 0;
}


/*
  space optimised code

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int ans=0, x;
    for(int i=0; i<n; i++)
    {
       cin>>x;
       ans= ans^x;
    }

    cout<<"The single element is : "<<ans;
    return 0;
}


*/


