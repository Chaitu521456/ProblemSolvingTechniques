/* Given a unsorted binary array.
   Sort the array.
*/


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of array : ";
    cin>>n;

    // reading input
    vector<int> arr(n);
    cout<<"Enter the Elements into the array : \n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    // main logic
    int i=0, j=n-1;
    while(i<j)
    {
        if(arr[i]==0)
            i++;
        if(arr[j]==1)
            j--;
        if(arr[i]==1 && arr[j]==0)
        {
            arr[i]=0;
            arr[j]=1;
            i++;
            j--;
        }
    }

    // output printing
    cout<<"The sorted array is : \n";
    for(int i=0; i<n; i++)
         cout<<arr[i]<<" ";
    return 0;
}
