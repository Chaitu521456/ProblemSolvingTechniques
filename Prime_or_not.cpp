// Prime or not

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int flag=0;
    if(n<=1) flag=1;
    else
    {
       for(int i=2; i<=sqrt(n); i++)
       {
          if(n%i==0)
          {
             flag=1;
             break;
          }
       }
    }

    if(flag) cout<<n<<" is not a Prime Number ";
    else cout<<n<<" is a Prime Number ";
    return 0;
}
