/* rotating the array for d times */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,d;
    cout<<"Enter the size of the array and no.of rotations: \n";
    cin>>n>>d;

    // read the input into the array
    vector<int> arr(n);
    cout<<"Enter elements into the vector : \n";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    // main logic
    d= d%n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d, arr.end());

    // print the array
    cout<<"The array after d rotations is \n";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;

}
