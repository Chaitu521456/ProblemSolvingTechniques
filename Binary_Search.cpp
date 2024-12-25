// Binary Search
// the data is in sorted

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter Data size and the element to search : ";
    cin>>n>>k;

    vector<int> arr(n);
    cout<<"Enter the data : \n";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int low=0, high= n-1;
    int flag=-1;
    while(low<=high)
    {
        int mid= (low+high)/2;
        if(arr[mid]==k)
        {
            flag=mid;
            break;
        }
        else if(arr[mid]<k)
            low= mid+1;
        else
            high= mid-1;
    }

    if(flag!=-1) cout<<"Element found at index : "<<flag;
    else cout<<"Element not found";
    return 0;
}
