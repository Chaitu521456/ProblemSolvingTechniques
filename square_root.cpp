/* finding the square root of a number
   Valid for only perfect squares
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int low=1, high= n;
    int mid;

    while(low<=high)
    {
        mid= (low+high)/2;

        if(mid*mid== n)
        {
            break;
        }
        else if(mid*mid < n)
        {
            low= mid+1;
        }
        else
        {
            high= mid-1;
        }
    }

    cout<<"The square root of "<<n<<" is : "<<mid;
    return 0;
}
