/* First missing positive integer
   in an array
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    // read input elements
    set<int> st;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        st.insert(x);
    }

    // main logic
    int ans;
    n= st.size();
    for(int i=1; i<=n; i++)
    {
        if(!(st.find(i)!=st.end()))
        {
            ans=i;
            break;
        }
    }

    cout<<"The missing integer is : "<<ans;
    return 0;
}
