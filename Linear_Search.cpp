// Linear Search

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the number of elements and Element to be searched : ";
    cin>>n>>k;

    // read the data
    cout<<"Enter the data : \n";
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    // logic
    int flag=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==k)
        {
            flag=i;
            break;
        }
    }

    // print output
    if(flag!= -1) cout<<"Element is found at index : "<<flag;
    else cout<<"Element not found";
    return 0;
}
