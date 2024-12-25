// Sum of all subarrays

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    // read the array elements
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    // main logic
    int sum=0;
    for(int i=0; i<n; i++)
        sum= sum+(i+1)*(n-i)*arr[i];

    // print sum
    cout<<sum<<"\n";
    return 0;
}
