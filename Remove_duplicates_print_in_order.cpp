// Remove duplicates and print in order

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the data size : ";
    cin>>n;

    // read the data and main logic
    set<int> st;
    cout<<"Enter the data : \n";
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        st.insert(x);
    }

    // printing the output array
    n= st.size();
    cout<<"The Resultant data is : \n";
    for(int i : st)
        cout<<i<<" ";
    return 0;
}
